// gml_Object_oTutorial_Alarm_0 @ 0x140df4040

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oTutorial_Alarm_0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 **ppuVar3;
  ulonglong uVar4;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  local_d0 = "gml_Object_oTutorial_Create_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  _eh_vector_constructor_iterator_(local_88,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_b4 = 0xffffff;
  local_c0 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uVar1 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_c8 = 4;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f8678);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = &DAT_bff0000000000000;
  local_c8 = 5;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  local_b4 = 0;
  local_c0 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a7e8,0,&local_c0);
  local_c8 = 6;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02ae8);
  uStack_fc = 0xd;
  local_108 = (longlong *)0x0;
  if (&local_108 != puVar2) {
    local_e8 = 0;
    uStack_e4 = 0;
    uStack_e0 = uStack_100;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_e8);
  }
  local_c8 = 8;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02af8);
  uStack_fc = 0xd;
  local_108 = (longlong *)0x3ff0000000000000;
  if (&local_108 != puVar2) {
    local_e8 = 0;
    uStack_e4 = 0x3ff00000;
    uStack_e0 = uStack_100;
    uStack_dc = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_e8);
  }
  local_c8 = 10;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_c8 = 0xb;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_c8 = 0xd;
  puVar2 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02b18);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar2);
  }
  *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
  *puVar2 = 0;
  local_c8 = 0xf;
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  local_e8 = _DAT_141ddbc48;
  uStack_e4 = uRam0000000141ddbc4c;
  uStack_e0 = uRam0000000141ddbc50;
  uStack_dc = DAT_141ddbc54;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  local_58 = local_88;
  ppuVar3 = &local_58;
  gml_Script_jb_stack_layer_play(param_1,param_2,&local_f8,1,ppuVar3);
  local_c8 = 0x12;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  uStack_fc = 6;
  uVar4 = (ulonglong)ppuVar3 & 0xffffffffffffff00;
  local_108 = param_1;
  FUN_140e87440(&local_108,DAT_141a0a828,0x80000000,&local_98,uVar4,0);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140e87440(uVar1,DAT_1419ef538,0x80000000,&local_a8,uVar4 & 0xffffffffffffff00,0);
  local_e8 = (undefined4)local_98;
  uStack_e4 = local_98._4_4_;
  uStack_e0 = uStack_90;
  uStack_dc = uStack_8c;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_e8);
  local_e8 = (undefined4)local_a8;
  uStack_e4 = local_a8._4_4_;
  uStack_e0 = uStack_a0;
  uStack_dc = uStack_9c;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_e8);
  local_50 = local_78;
  FUN_140e645a0(&local_108,gml_Object_oTutorial_Step_0,param_1);
  local_e8 = (undefined4)local_108;
  uStack_e4 = local_108._4_4_;
  uStack_e0 = uStack_100;
  uStack_dc = uStack_fc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_e8);
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_48 = local_68;
  gml_Script_SignalRemove(param_1,param_2,&local_f8,3,&local_58);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  _eh_vector_destructor_iterator_(local_88,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

