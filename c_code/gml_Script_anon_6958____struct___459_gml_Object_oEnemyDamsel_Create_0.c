// gml_Script_anon_6958____struct___459_gml_Object_oEnemyDamsel_Create_0 @ 0x14097e8b0

undefined8 *
gml_Script_anon_6958____struct___459_gml_Object_oEnemyDamsel_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  code *pcVar9;
  undefined4 uVar11;
  ulonglong uVar10;
  ulonglong in_stack_ffffffffffffff00;
  undefined8 **ppuVar12;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_70 = "gml_Script_anon@6057@gml_Object_oEnemyDamsel_Create_0";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0xed;
  pcVar9 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_98,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_ec = 0;
  local_f8 = 0;
  local_dc = 0;
  local_e8 = 0;
  bVar2 = true;
  bVar1 = false;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_68 = 0xee;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419eff48);
  FUN_140e87440(uVar5,DAT_1419f4a98,0x80000000,&local_a8,(ulonglong)pcVar9 & 0xffffffffffffff00,
                in_stack_ffffffffffffff00 & 0xffffffffffffff00);
  uVar5 = FUN_140069500(uVar5);
  puVar8 = &local_a8;
  FUN_140e63610(uVar5,param_2,&local_f8,0,puVar8,0);
  uVar11 = (undefined4)((ulonglong)puVar8 >> 0x20);
  local_68 = 0xf0;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0868);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') goto LAB_14097ec5f;
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
  uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0a38);
  iVar4 = FUN_140e851f0(uVar5,uVar6,DAT_141955260,1);
  if ((iVar4 == -2) || (0 < iVar4)) goto LAB_14097ec5f;
  local_68 = 0xf1;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_e8 = 0;
  local_e0 = 0;
  local_dc = 5;
  local_60 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f0778);
  puVar8 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_14097ead5:
    local_b8 = *puVar7;
    uStack_b0 = *(undefined4 *)(puVar7 + 1);
    uStack_ac = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_b8);
  }
  else {
    puVar7 = (undefined8 *)*param_5;
    if (puVar7 != &local_98) goto LAB_14097ead5;
  }
  local_58 = &local_98;
  ppuVar12 = &local_58;
  uVar10 = CONCAT44(uVar11,DAT_1419fcb88);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_e8,1,uVar10,ppuVar12);
  cVar3 = FUN_140e491e0(uVar5);
  if (cVar3 == '\0') {
    uStack_ac = 0;
    local_b8 = 0x4056800000000000;
    puVar8 = &local_b8;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    if (0 < param_4) {
      puVar8 = (undefined8 *)*param_5;
    }
    FUN_140e87440(puVar8,DAT_141a572c0,0x80000000,&local_d8,uVar10 & 0xffffffffffffff00,
                  (ulonglong)ppuVar12 & 0xffffffffffffff00);
    uStack_bc = local_cc;
    uStack_c0 = local_d0;
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) == 0) {
      local_c8 = local_d8;
    }
    else {
      FUN_1400419b0(&local_c8,&local_d8);
    }
    puVar8 = &local_c8;
  }
  uVar11 = uStack_ac;
  local_48 = *(undefined4 *)puVar8;
  uStack_44 = *(undefined4 *)((longlong)puVar8 + 4);
  uStack_40 = *(undefined4 *)(puVar8 + 1);
  uStack_3c = *(undefined4 *)((longlong)puVar8 + 0xc);
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_48);
  if ((bVar1) && ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_b8);
  }
  if ((bVar2) && ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_c8);
  }
  local_50 = local_88;
  FUN_140e63610(param_1,param_2,&local_f8,1,local_60,&local_50);
LAB_14097ec5f:
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_98,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

