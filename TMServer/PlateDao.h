#ifndef PLATE_DAO_H
#define PLATE_DAO_H

#include "Plate.h"
#include <vector>

class PlateDao
{
public:
	PlateDao();
	~PlateDao();

	/*
	* Summary: ��һ��Plateʵ�����浽���ݿ���
	* Parameters:
	*		plate: һ��Plateʵ��
	* Return: 
	*		0��ʾ�ɹ�����0��ʾʧ��
	*/
	int save(const Plate &plate);

	/*
	* Summary: �����ݿ����Ƴ�һ��Plateʵ����Ӧ��������
	* Parameters:
	*		plate: һ��Plateʵ��
	* Return:
	*		0��ʾ�ɹ�����0��ʾʧ��
	*/
	int remove(const Plate &plate);

	/*
	* Summary: ����һ��Plateʵ����Ӧ��������
	* Parameters:
	*		plate: һ��Plateʵ��
	* Return:
	*		0��ʾ�ɹ�����0��ʾʧ��
	*/
	int update(const Plate &plate);

	/*
	* Summary: ��id��ѯһ������
	* Parameters:
	*		id: �������id
	* Return:
	*		�����ѯ�ɹ�������һ��ָ��һ��Plateʵ����ָ�룬ʧ���򷵻� nullptr
	*/
	Plate *findById(int id);

	/*
	* Summary: �����ƺŲ�ѯ����
	* Parameters:
	*		number: ��ʾ���ƺŵ��ַ���
	* Return:
	*		�����ѯ�ɹ�������һ�����������Plate��ָ�룬ʧ���򷵻�һ������Ϊ0��������
	*/
	std::vector<Plate *> &findByNumber(std::string number);

	/*
	* Summary: ��ʱ���ѯ����
	* Parameters:
	*		time: ��ʾʱ����ַ���������Ϊ��λ����ʽΪ "yy-mm-dd"��
	*				y��ʾ�꣬m��ʾ�£�d��ʾ�ա�
	* Return:
	*		�����ѯ�ɹ�������һ�����������Plate��ָ�룬ʧ���򷵻�һ������Ϊ0��������
	*/
	std::vector<Plate *> findByTime(std::string time);
};

#endif // !PLATE_DAO_H


