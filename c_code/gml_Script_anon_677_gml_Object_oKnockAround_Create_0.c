// gml_Script_anon_677_gml_Object_oKnockAround_Create_0 @ 0x140b38260

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_677_gml_Object_oKnockAround_Create_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  uint local_b8;
  uint uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  char *local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70 [12];
  byte local_64;
  undefined1 local_60 [12];
  byte local_54;
  undefined1 local_50 [12];
  byte local_44;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  
  local_90 = "gml_Object_oKnockAround_Create_0";
  local_88 = 0;
  local_98 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_98;
  _eh_vector_constructor_iterator_(local_70,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_9c = 0xffffff;
  local_a8 = 0;
  local_74 = 0xffffff;
  local_80 = 0;
  local_88 = 4;
  FUN_140e98b30(param_1,param_2);
  local_88 = 6;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419ffb28);
  uStack_bc = 0xd;
  local_c8 = 0;
  if (&local_c8 != puVar1) {
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = uStack_c0;
    uStack_ac = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  local_88 = 7;
  puVar2 = (undefined *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06638);
  if (puVar2 != &DAT_141dd99f8) {
    local_b8 = _DAT_141dd99f8;
    uStack_b4 = uRam0000000141dd99fc;
    uStack_b0 = uRam0000000141dd9a00;
    uStack_ac = DAT_141dd9a04;
    if ((1 << ((byte)*(undefined4 *)(puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_b8);
  }
  local_88 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f3c38);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x3fe8000000000000;
  local_88 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a04b78);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_c8,gml_Object_oKnockAround_Alarm_0,param_1);
  if (&local_c8 != puVar1) {
    local_b8 = (uint)local_c8;
    uStack_b4 = local_c8._4_4_;
    uStack_b0 = uStack_c0;
    uStack_ac = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  local_88 = 0x29;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f5b18);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_c8,gml_Object_oKnockAround_Step_0,param_1);
  if (&local_c8 != puVar1) {
    local_b8 = (uint)local_c8;
    uStack_b4 = local_c8._4_4_;
    uStack_b0 = uStack_c0;
    uStack_ac = uStack_bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_b8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140e60910(1);
  local_88 = 0x2f;
  local_80 = 0;
  local_78 = 0;
  local_74 = 5;
  local_b8 = _DAT_1419ebf60;
  uStack_b4 = uRam00000001419ebf64;
  uStack_b0 = uRam00000001419ebf68;
  uStack_ac = uRam00000001419ebf6c;
  if ((1 << (local_64 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_70);
  }
  FUN_140041b80(local_70,&local_b8);
  local_40 = local_70;
  local_b8 = DAT_1419f3c28 & 0xffffff;
  uStack_b4 = (int)(DAT_1419f3c28 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_b4 == 0xf) {
    uStack_b4 = 0x4000004;
  }
  else {
    uStack_b4 = uStack_b4 | 0x1000000;
  }
  uStack_bc = 0xf;
  local_c8 = CONCAT44(uStack_b4,DAT_1419f3c28) & 0xffffffff00ffffff;
  uStack_b0 = uStack_c0;
  uStack_ac = 0xf;
  if ((1 << (local_54 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_60);
  }
  FUN_140041b80(local_60,&local_b8);
  local_38 = local_60;
  local_b8 = (uint)DAT_1419df7b0;
  uStack_b4 = DAT_1419df7b0._4_4_;
  uStack_b0 = DAT_1419df7b8;
  uStack_ac = DAT_1419df7bc;
  if ((1 << (local_44 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_50);
  }
  FUN_140041b80(local_50,&local_b8);
  local_30 = local_50;
  gml_Script_truestate_enqueue(param_1,param_2,&local_80,3,&local_40);
  local_88 = 0x31;
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  local_9c = 0;
  local_a8 = 0;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_a8);
  if ((1 << ((byte)local_74 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_80);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(local_70,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_98;
  return;
}

