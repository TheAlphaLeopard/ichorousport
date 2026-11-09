// gml_Script____struct___387_gml_Object_oBossSplit_Create_0 @ 0x1407e9750

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___387_gml_Object_oBossSplit_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffe90;
  ulonglong uVar9;
  undefined1 **ppuVar10;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40 [3];
  
  local_130 = "gml_Script_anon@11941@___struct___387@gml_Object_oBossSplit_Create_0";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 0x222;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_68,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_94 = 0xffffff;
  local_a0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_f4 = 0xffffff;
  local_100 = 0;
  local_104 = 0xffffff;
  local_110 = 0;
  local_114 = 0xffffff;
  local_120 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_14c = 0;
  local_158 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_128 = 0x223;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  FUN_140e87440(uVar4,DAT_141a0a928,0x80000000,&local_a0,(ulonglong)pcVar6 & 0xffffffffffffff00,
                in_stack_fffffffffffffe90 & 0xffffffffffffff00);
  uVar4 = FUN_140069500(uVar4);
  uVar9 = 0;
  puVar7 = &local_a0;
  puVar5 = (undefined8 *)FUN_140e63610(uVar4,param_2,&local_158,0,puVar7,0);
  if (puVar5 != &local_e0) {
    local_78 = *puVar5;
    uStack_70 = puVar5[1];
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_78);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_e0);
  local_128 = 0x224;
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  local_e4 = 0;
  local_f0 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_f0);
  local_128 = 0x225;
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  local_f4 = 0;
  local_100 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a572d0);
  FUN_140e87930(uVar4,DAT_141a1dce0,0x80000000,&local_100);
  local_128 = 0x227;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_128 = 0x228;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar5);
  }
  *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
  *puVar5 = 0;
  local_128 = 0x22a;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  local_104 = 0;
  local_110 = 0;
  FUN_140e87930(uVar4,DAT_141a1f230,0x80000000,&local_110);
  local_128 = 0x22b;
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  local_114 = 0;
  local_120 = 0;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  FUN_140e87930(uVar4,DAT_141a1f500,0x80000000,&local_120);
  local_128 = 0x22c;
  uStack_70 = CONCAT44(0xd,(undefined4)uStack_70);
  local_78 = 0;
  local_88 = 0;
  uStack_80 = uStack_70;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  FUN_140041b80(&local_d0,&local_88);
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  FUN_140e87930(uVar4,DAT_141a09a68,0x80000000,&local_d0);
  local_128 = 0x22d;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  uVar9 = uVar9 & 0xffffffffffffff00;
  uVar8 = (ulonglong)puVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_168,uVar8,uVar9);
  FUN_140e87440(&local_168,DAT_1419f5848,0x80000000,&local_b0,uVar8 & 0xffffffffffffff00,
                uVar9 & 0xffffffffffffff00);
  local_88 = CONCAT44(uRam0000000141dd6b7c,_DAT_141dd6b78);
  uStack_80 = CONCAT44(DAT_141dd6b84,uRam0000000141dd6b80);
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_88);
  local_48 = local_68;
  switch(local_15c) {
  default:
switchD_1407e9c0c_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_168;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_168 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1407e9c0c_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_168);
    uVar4 = FUN_140e87250(uVar3);
  }
  ppuVar10 = &local_48;
  puVar7 = &local_b0;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_158,1,puVar7,ppuVar10);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') goto LAB_1407e9da4;
  local_128 = 0x22e;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a09968);
  uVar8 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
  uVar9 = (ulonglong)puVar7 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5868,0x80000000,&local_168,uVar9,uVar8);
  FUN_140e87440(&local_168,DAT_141a55540,0x80000000,&local_c0,uVar9 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  local_88 = CONCAT44(uRam0000000141dd6b7c,_DAT_141dd6b78);
  uStack_80 = CONCAT44(DAT_141dd6b84,uRam0000000141dd6b80);
  if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_58);
  }
  FUN_140041b80(local_58,&local_88);
  local_40[0] = local_58;
  uVar4 = 0;
  switch(local_15c) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_1407e9d4a_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_168);
    uVar4 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar4 = local_168;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_168 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_1407e9d4a_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_148,1,&local_c0,local_40);
LAB_1407e9da4:
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  _eh_vector_destructor_iterator_(local_68,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

