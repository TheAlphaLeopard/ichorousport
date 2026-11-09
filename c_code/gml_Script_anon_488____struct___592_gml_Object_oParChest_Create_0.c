// gml_Script_anon_488____struct___592_gml_Object_oParChest_Create_0 @ 0x140ba10c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_488____struct___592_gml_Object_oParChest_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 *local_res8;
  code *pcVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong in_stack_ffffffffffffff20;
  ulonglong uVar8;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  
  local_50 = "gml_Script_anon@169@gml_Object_oParChest_Create_0";
  local_58 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_58;
  local_48 = 10;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_78,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_5c = 0;
  local_68 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_48 = 0xb;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar4,DAT_1419f5df8,0x80000000,&local_88,(ulonglong)pcVar5 & 0xffffffffffffff00,
                in_stack_ffffffffffffff20 & 0xffffffffffffff00);
  uStack_cc = DAT_141dda134;
  uStack_d0 = DAT_141dda130;
  if ((1 << ((byte)DAT_141dda134 & 0x1f) & 0x46U) == 0) {
    local_d8 = DAT_141dda128;
  }
  else {
    FUN_1400419b0(&local_d8,&DAT_141dda128);
  }
  uVar4 = FUN_140069500(uVar4);
  uVar8 = 0;
  puVar6 = &local_88;
  uVar4 = FUN_140e63610(uVar4,param_2,&local_68,0,puVar6,0);
  iVar2 = FUN_140e851f0(uVar4,&local_d8,DAT_141955260,0);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if (iVar2 != 0) goto LAB_140ba148c;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a56b60);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    uStack_cc = 0xf;
    local_d8 = 0x100000000000106;
    uVar8 = uVar8 & 0xffffffffffffff00;
    puVar6 = (undefined8 *)((ulonglong)puVar6 & 0xffffffffffffff00);
    FUN_140e87440(&local_d8,DAT_1419ff928,0x80000000,&local_98,puVar6,uVar8);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    uStack_cc = 0;
    local_d8 = 0;
    iVar2 = FUN_140e851f0(&local_98,&local_d8,DAT_141955260,1);
    if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if (iVar2 < 1) goto LAB_140ba148c;
  }
  local_48 = 0xd;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  uStack_cc = 0xf;
  local_d8 = 0x1000000000000ee;
  uVar8 = uVar8 & 0xffffffffffffff00;
  uVar7 = (ulonglong)puVar6 & 0xffffffffffffff00;
  FUN_140e87440(&local_d8,DAT_1419f5868,0x80000000,&local_c8,uVar7,uVar8);
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140e87440(&local_c8,DAT_141a55540,0x80000000,&local_a8,uVar7 & 0xffffffffffffff00,
                uVar8 & 0xffffffffffffff00);
  local_d8 = CONCAT44(uRam0000000141dda0bc,_DAT_141dda0b8);
  uStack_d0 = uRam0000000141dda0c0;
  uStack_cc = DAT_141dda0c4;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_d8);
  local_res8 = local_78;
  uVar4 = 0;
  switch(local_bc) {
  case 0:
  case 7:
  case 10:
  case 0xd:
switchD_140ba1433_caseD_0:
    uVar3 = FUN_140e4a8b0(&local_c8);
    uVar4 = FUN_140e87250(uVar3);
    break;
  case 6:
    uVar4 = local_c8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_c8 >> 0x20);
    if ((iVar2 == 0x1000000) || (iVar2 == 0x4000001)) goto switchD_140ba1433_caseD_0;
  }
  FUN_140e63610(uVar4,param_2,&local_b8,1,&local_a8,&local_res8);
LAB_140ba148c:
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_58;
  return param_3;
}

