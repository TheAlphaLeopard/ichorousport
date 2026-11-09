// gml_Script_anon_3209_gml_Object_oBossEmbraceHalf_Create_0 @ 0x14075e0e0

longlong *
gml_Script_anon_3209_gml_Object_oBossEmbraceHalf_Create_0
          (longlong *param_1,undefined8 param_2,longlong *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined4 *local_res8;
  ulonglong uVar8;
  undefined4 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@1797@gml_Object_oBossEmbraceHalf_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 0x39;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_6c = 0;
  uVar7 = 0;
  local_78 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0x3a;
  cVar2 = '\0';
  puVar5 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  if (puVar5 != local_98) {
    local_68 = *puVar5;
    uStack_64 = puVar5[1];
    uStack_60 = puVar5[2];
    uStack_5c = puVar5[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_68);
  }
  local_res8 = local_98;
  ppuVar9 = &local_res8;
  uVar8 = CONCAT44(uVar4,DAT_141a02ef8);
  uVar6 = FUN_140e634e0(param_1,param_2,&local_78,1,uVar8,ppuVar9);
  cVar1 = FUN_140e491e0(uVar6);
  if (cVar1 == '\0') goto LAB_14075e315;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_a8 = 0;
  local_a0 = 0;
  local_9c = 5;
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f0d0);
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a572d0,0x80000000,&local_b8,uVar8,uVar10);
  FUN_140e87440(&local_b8,DAT_1419f5878,0x80000000,&local_88,uVar8 & 0xffffffffffffff00,
                uVar10 & 0xffffffffffffff00);
  switch(local_ac) {
  default:
switchD_14075e2b7_caseD_1:
    uVar6 = 0;
    break;
  case 6:
    uVar6 = local_b8;
    break;
  case 0xf:
    iVar3 = (int)((ulonglong)local_b8 >> 0x20);
    if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_14075e2b7_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar4 = FUN_140e4a8b0(&local_b8);
    uVar6 = FUN_140e87250(uVar4);
  }
  uVar6 = FUN_140e63610(uVar6,param_2,&local_a8,0,&local_88,0);
  cVar2 = FUN_140e491e0(uVar6);
LAB_14075e315:
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (cVar2 != '\0') {
    uVar7 = 0x3ff00000;
  }
  *param_3 = (ulonglong)uVar7 << 0x20;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

