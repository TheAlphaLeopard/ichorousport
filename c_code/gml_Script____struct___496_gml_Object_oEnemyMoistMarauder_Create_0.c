// gml_Script____struct___496_gml_Object_oEnemyMoistMarauder_Create_0 @ 0x140a0f790

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___496_gml_Object_oEnemyMoistMarauder_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined1 **ppuVar6;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 local_40 [12];
  byte local_34;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  
  local_90 = "gml_Script_anon@10267@___struct___496@gml_Object_oEnemyMoistMarauder_Create_0";
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  local_88 = 0x15e;
  _eh_vector_constructor_iterator_(local_60,0x10,3,FUN_1400424d0,FUN_140041b30);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_74 = 0xffffff;
  local_80 = 0;
  local_64 = 0xffffff;
  local_70 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_88 = 0x15f;
  if (puVar2 != &local_80) {
    local_a8 = *(undefined4 *)puVar2;
    uStack_a4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_a0 = *(undefined4 *)(puVar2 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
    FUN_140041b80(&local_80,&local_a8);
  }
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_80);
  local_88 = 0x160;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f1588);
  uVar5 = 0;
  FUN_140e63610(param_1,param_2,&local_c8,0,uVar3,0);
  local_88 = 0x162;
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  local_c8 = 0;
  local_c0 = 0;
  local_bc = 5;
  local_a8 = (undefined4)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_a8);
  local_30 = local_60;
  local_a8 = (undefined4)DAT_1419df7b0;
  uStack_a4 = DAT_1419df7b0._4_4_;
  uStack_a0 = DAT_1419df7b8;
  uStack_9c = DAT_1419df7bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_a8);
  local_28 = local_50;
  ppuVar6 = &local_30;
  uVar3 = gml_Script_animcurve_lerp(param_1,param_2,&local_c8,2,ppuVar6);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_88 = 0x166;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
    FUN_140e63610(param_1,param_2,&local_c8,0,uVar3,0);
    local_88 = 0x167;
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 5;
    puVar2 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
    ppuVar6 = (undefined1 **)0x0;
    uVar3 = 0;
    puVar4 = &local_c8;
  }
  else {
    local_88 = 0x163;
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    local_b8 = 0;
    local_b0 = 0;
    local_ac = 5;
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5868);
    FUN_140e87440(uVar3,DAT_141a55540,0x80000000,&local_70,(ulonglong)ppuVar6 & 0xffffffffffffff00,
                  uVar5 & 0xffffffffffffff00);
    local_a8 = _DAT_141dd8c68;
    uStack_a4 = uRam0000000141dd8c6c;
    uStack_a0 = uRam0000000141dd8c70;
    uStack_9c = DAT_141dd8c74;
    if ((1 << (local_34 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_40);
    }
    FUN_140041b80(local_40,&local_a8);
    local_20 = local_40;
    param_1 = (longlong *)FUN_140069500(uVar3);
    ppuVar6 = &local_20;
    puVar2 = &local_70;
    uVar3 = 1;
    puVar4 = &local_b8;
  }
  FUN_140e63610(param_1,param_2,puVar4,uVar3,puVar2,ppuVar6);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_70);
  }
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  _eh_vector_destructor_iterator_(local_60,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return param_3;
}

