//
// Created by Felipe Cody on 12/9/21.
//

#ifndef  AMateria_HPP
#define  AMateria_HPP
#include <iostream>
#include <iomanip>

class ICharacter;

class  AMateria{
    protected:
		std::string _type;
		AMateria();
	public:
		AMateria(std::string const & type);
		virtual ~AMateria();
        AMateria& operator=(AMateria const & src);

        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

class  Ice : public AMateria{
public:
	Ice();
	Ice(std::string const & type);
	virtual ~Ice();
	Ice& operator=(Ice const & src);
	virtual Ice* clone() const;
        virtual void use(ICharacter& target);
};

class  Cure : public AMateria{
public:
	Cure();
	Cure(std::string const & type);
	virtual ~Cure();
	Cure& operator=(Cure const & src);
	virtual Cure* clone() const;
        virtual void use(ICharacter& target);
};


class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

class Character : public ICharacter
{
private:
	std::string _name;
	AMateria *_materias[4];
public:
	Character();
	Character(const std::string name);
	Character(const Character& src);
	Character& operator=(Character const & src);
	virtual ~Character();
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};


class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
private:
	AMateria *_materias[4];
public:
	MateriaSource();
	MateriaSource(const MateriaSource& src);
	MateriaSource& operator=(MateriaSource const & src);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif