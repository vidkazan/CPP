//
// Created by Felipe Cody on 12/9/21.
//

#include "m04ex03.hpp"

//	AMateria

AMateria::AMateria() : _type("AMateriaDefaultType") {
//	std::cout << std::setw(10) << "AMateria " << &*this <<   " default constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) {
	this->_type = type;
//	std::cout<< std::setw(10) << "AMateria " << &*this << " copy constructor" << std::endl;
}

AMateria::~AMateria(){
//	std::cout << std::setw(10) << "AMateria "<< &*this << " destructor" << std::endl;
}
AMateria& AMateria::operator=(AMateria const & src){
	_type = src._type;
//	std::cout << std::setw(10) << "AMateria " << &*this << " assignation member function called" << std::endl;
	return *this;
}

void AMateria::use(ICharacter&target){
	std::string tmp = target.getName();
}

std::string const & AMateria::getType() const{
	return this->_type;
}

// Ice

Ice::Ice() {
	_type = "ice";
//	std::cout << std::setw(10) << "Ice " << &*this <<   " default constructor" << std::endl;
}

Ice::Ice(std::string const & type) {
	this->_type = type;
//	std::cout<< std::setw(10) << "Ice " << &*this << " copy constructor" << std::endl;
}

Ice::~Ice(){
//	std::cout << std::setw(10) << "Ice "<< &*this << " destructor" << std::endl;
}
Ice& Ice::operator=(Ice const & src){
	_type = src._type;
//	std::cout << std::setw(10) << "Ice " << &*this << " assignation member function called" << std::endl;
	return *this;
}

Ice* Ice::clone() const
{
	Ice *newIce = new Ice(_type);
	return newIce;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

// Cure

Cure::Cure() {
	_type = "cure";
//	std::cout << std::setw(10) << "Cure " << &*this <<   " default constructor" << std::endl;
}

Cure::Cure(std::string const & type) {
	this->_type = type;
//	std::cout<< std::setw(10) << "Cure " << &*this << " copy constructor" << std::endl;
}

Cure::~Cure(){
//	std::cout << std::setw(10) << "Cure "<< &*this << " destructor" << std::endl;
}
Cure& Cure::operator=(Cure const & src){
	_type = src._type;
//	std::cout << std::setw(10) << "Cure " << &*this << " assignation member function called" << std::endl;
	return *this;
}

Cure* Cure::clone() const
{
	Cure *newCure = new Cure(_type);
	return newCure;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

// Character

Character::Character(){
	_name = "CharacterDefaultName";
	for(int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

Character::Character(const std::string name) : _name(name) {
	for(int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}
Character::~Character(){
	for(int i = 0; i < 4; i++){
		if(_materias[i] != nullptr)
			delete _materias[i];
	}
}

const std::string&Character::getName() const{
	return (this->_name);
}

Character & Character::operator=(const Character & src){
	_name = src.getName();
	for(int i = 0; i < 4; i++){
		if(_materias[i] != nullptr)
			delete _materias[i];
	}
	for(int i = 0; i < 4; i++){
		_materias[i] = src._materias[i];
	}
	return *this;
}

Character::Character(const Character & src){
	*this = src;
}

void Character::equip(AMateria *m){
	if(m == nullptr)
		return;
	for(int i = 0; i < 4; i++){
		if(_materias[i] == nullptr){
			_materias[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx){
	if(idx < 4 && idx > -1)
		_materias[idx] = nullptr;
}

void Character::use(int idx, ICharacter&target){
	if(idx < 4 && idx > -1){
		if(_materias[idx] != nullptr)
			_materias[idx]->use(target);
	}
}

// MateriaSource

MateriaSource::MateriaSource(){
	for(int i = 0; i < 4; i++)
		_materias[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource & src){
	*this = src;
}

MateriaSource::~MateriaSource(){
	for(int i = 0; i < 4; i++){
		if(_materias[i] != nullptr)
			delete _materias[i];
	}
}

MateriaSource & MateriaSource::operator=(const MateriaSource & src){
	for(int i = 0; i < 4; i++){
		if(_materias[i] != nullptr)
			delete _materias[i];
	}
	for(int i = 0; i < 4; i++){
		if(src._materias[i] != nullptr)
			_materias[i] = src._materias[i];
	}
	return *this;
}


void MateriaSource::learnMateria(AMateria*m){
	if(m == nullptr)
		return;
	for(int i = 0; i < 4; i++){
		if(_materias[i] == nullptr){
			_materias[i] = m;
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(std::string const & type){
	for(int i = 0; i < 4; i++){
		if(_materias[i] != nullptr &&  _materias[i]->getType() == type)
			return _materias[i]->clone();
	}
	return nullptr;
}