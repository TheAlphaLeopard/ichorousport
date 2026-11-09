// gml_Script_anon_13664_SnowState_SnowState @ 0x1405017e0

undefined8 *
gml_Script_anon_13664_SnowState_SnowState
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined4 local_98 [3];
  byte local_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  byte local_6c;
  undefined8 *local_68 [3];
  undefined4 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  
  local_f0 = "gml_Script_anon@13128@SnowState@SnowState";
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  local_e8 = 0x1a1;
  uVar6 = 1;
  _eh_vector_constructor_iterator_(&local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined4 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419fcaf8);
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_e8 = 0x1a2;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fcf28);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_d8,gml_Script_anon_13385_SnowState_SnowState,0);
  if (&local_d8 != puVar1) {
    local_108 = local_d8;
    uStack_104 = uStack_d4;
    uStack_100 = uStack_d0;
    uStack_fc = uStack_cc;
    if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_108);
  }
  FUN_140e60910(1);
  if (puVar1 != local_98) {
    local_108 = *puVar1;
    uStack_104 = puVar1[1];
    uStack_100 = puVar1[2];
    uStack_fc = puVar1[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_108);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  local_50 = local_98;
  puVar4 = &DAT_1419df7b0;
  if (param_4 < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_140501989:
    local_108 = *(undefined4 *)puVar5;
    uStack_104 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_100 = *(undefined4 *)(puVar5 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_108);
  }
  else {
    puVar5 = (undefined8 *)param_5[2];
    if (puVar5 != &local_88) goto LAB_140501989;
  }
  local_48 = &local_88;
  if (param_4 < 2) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)param_5[1];
    if (puVar5 == &local_78) goto LAB_140501a03;
  }
  local_108 = *(undefined4 *)puVar5;
  uStack_104 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_100 = *(undefined4 *)(puVar5 + 1);
  uStack_fc = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  FUN_140041b80(&local_78,&local_108);
LAB_140501a03:
  local_40 = &local_78;
  if (param_4 < 1) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)*param_5;
  }
  uVar3 = FUN_140e634e0(param_1,param_2,&local_118,3,CONCAT44(uVar6,DAT_1419fd6d8),&local_50);
  FUN_140e98ef0(param_1,param_2,uVar2,puVar5,uVar3);
  local_e8 = 0x1a6;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd068);
  if ((param_4 < 1) || (puVar4 = (undefined8 *)*param_5, puVar4 != &local_c8)) {
    local_108 = *(undefined4 *)puVar4;
    uStack_104 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_100 = *(undefined4 *)(puVar4 + 1);
    uStack_fc = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_108);
  }
  local_68[0] = &local_c8;
  FUN_140e63610(param_1,param_2,&local_118,1,uVar2,local_68);
  local_e8 = 0x1a8;
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 6;
  *param_3 = param_1;
  uVar2 = FUN_140e5c910();
  FUN_140e42c10(uVar2,param_1);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

