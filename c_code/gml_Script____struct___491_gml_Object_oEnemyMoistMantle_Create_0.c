// gml_Script____struct___491_gml_Object_oEnemyMoistMantle_Create_0 @ 0x1409fa820

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___491_gml_Object_oEnemyMoistMantle_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *local_res18 [2];
  code *pcVar5;
  undefined1 **ppuVar6;
  undefined4 uVar7;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined1 local_e0 [12];
  byte local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 local_90;
  undefined4 local_84;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  
  local_100 = "gml_Script_anon@3496@___struct___491@gml_Object_oEnemyMoistMantle_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x9b;
  pcVar5 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_e0,0x10,1,FUN_1400424d0,FUN_140041b30);
  local_84 = 0xffffff;
  local_90 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_a4 = 0xffffff;
  local_b0 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_11c = 0;
  local_128 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x9c;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  local_84 = 0;
  local_90 = 0;
  FUN_140e87930(uVar2,DAT_141a0a848,0x80000000,&local_90);
  local_f8 = 0x9e;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0xc010000000000000;
  local_f8 = 0xa0;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  local_f8 = 0xa1;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0x3ff0000000000000;
  local_f8 = 0xa2;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd428);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  local_f8 = 0xa4;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  local_94 = 0;
  local_a0 = 0x3ff0000000000000;
  FUN_140e87930(uVar2,DAT_141a0a748,0x80000000,&local_a0);
  local_f8 = 0xa5;
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  local_a4 = 0;
  local_b0 = 0x3ff0000000000000;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57560);
  FUN_140e87930(uVar2,DAT_141a0a858,0x80000000,&local_b0);
  local_f8 = 0xa7;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
  FUN_140e87440(uVar2,DAT_1419f5fd8,0x80000000,&local_70,(ulonglong)pcVar5 & 0xffffffffffffff00,
                in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  uStack_12c = DAT_141dd8bb4;
  uStack_130 = DAT_141dd8bb0;
  if ((1 << ((byte)DAT_141dd8bb4 & 0x1f) & 0x46U) == 0) {
    local_138 = DAT_141dd8ba8;
  }
  else {
    FUN_1400419b0(&local_138,&DAT_141dd8ba8);
  }
  uVar2 = FUN_140069500(uVar2);
  uVar2 = FUN_140e63610(uVar2,param_2,&local_128,0,&local_70,0);
  iVar1 = FUN_140e851f0(uVar2,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_10c = 0xf;
  if (iVar1 == 0) {
    local_f8 = 0xa8;
    local_118 = 0x100000100000120;
    local_138 = 0x100000100000120;
    uStack_130 = uStack_110;
    uStack_12c = 0xf;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_138);
  }
  else {
    local_f8 = 0xaa;
    local_118 = 0x100000100000125;
    local_138 = 0x100000100000125;
    uStack_130 = uStack_110;
    uStack_12c = 0xf;
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    FUN_140041b80(&local_f0,&local_138);
  }
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_f0);
  local_f8 = 0xac;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_b4 = 0;
  local_c0 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_c0);
  local_f8 = 0xad;
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  local_c4 = 0;
  local_d0 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_d0);
  local_f8 = 0xaf;
  uStack_10c = 0xf;
  local_118 = 0x100000100000120;
  local_138 = 0x100000100000120;
  uStack_130 = uStack_110;
  uStack_12c = 0xf;
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  FUN_140041b80(&local_80,&local_138);
  FUN_140e86fa0(param_1,DAT_1419f5c58,0x80000000,&local_80);
  local_f8 = 0xb0;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  uStack_10c = 0xf;
  local_118 = 0x100000000000149;
  local_138 = 0x100000000000149;
  uStack_130 = uStack_110;
  uStack_12c = 0xf;
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e0);
  }
  FUN_140041b80(local_e0,&local_138);
  local_res18[0] = local_e0;
  ppuVar6 = local_res18;
  gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_128,1,ppuVar6);
  uVar7 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  local_f8 = 0xb2;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = 0;
  local_120 = 0;
  local_11c = 5;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a11ee8);
  local_118 = CONCAT44(uRam0000000141dc6f14,_DAT_141dc6f10);
  uStack_110 = uRam0000000141dc6f18;
  uStack_10c = uRam0000000141dc6f1c;
  if ((1 << (local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e0);
  }
  FUN_140041b80(local_e0,&local_118);
  local_res18[0] = local_e0;
  FUN_140e609c0(param_1);
  uVar2 = FUN_140e78f40(2);
  puVar4 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_128,1,CONCAT44(uVar7,DAT_141a0a0d8),local_res18);
  uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_130 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_138,puVar4);
  }
  uStack_10c = 0;
  local_118 = uVar2;
  FUN_140042560(&local_138,&local_118);
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if (&local_138 != puVar3) {
    local_118 = local_138;
    uStack_110 = uStack_130;
    uStack_10c = uStack_12c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_118);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e60910(1);
  local_f8 = 0xb3;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57420);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar3);
  }
  *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
  *puVar3 = 0;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_84 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_90);
  }
  _eh_vector_destructor_iterator_(local_e0,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

