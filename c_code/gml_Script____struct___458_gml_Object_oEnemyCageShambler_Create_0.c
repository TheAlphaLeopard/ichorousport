// gml_Script____struct___458_gml_Object_oEnemyCageShambler_Create_0 @ 0x14096e4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___458_gml_Object_oEnemyCageShambler_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  ulonglong in_stack_fffffffffffffe70;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  longlong *local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  char *local_100;
  undefined4 local_f8;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined8 *local_40;
  
  local_100 = "gml_Script_anon@16453@___struct___458@gml_Object_oEnemyCageShambler_Create_0";
  local_108 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_108;
  local_f8 = 0x2f7;
  pcVar3 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_cc = 0xffffff;
  local_d8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  local_15c = 0;
  local_168 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_f8 = 0x2f8;
  uStack_16c = 0xf;
  local_178 = (longlong *)0x1000001000000a9;
  local_188 = 0xa9;
  uStack_184 = 0x1000001;
  uStack_180 = uStack_170;
  uStack_17c = 0xf;
  FUN_140041b80(&local_d8,&local_188);
  FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_d8);
  local_f8 = 0x2f9;
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_11c = 0;
  local_128 = 0;
  FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
  local_f8 = 0x2fa;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_12c = 0;
  local_138 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_138);
  local_f8 = 0x2fc;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  if (puVar1 != &local_148) {
    local_188 = *(undefined4 *)puVar1;
    uStack_184 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_180 = *(undefined4 *)(puVar1 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_188);
  }
  FUN_140e87930(uVar2,DAT_141a1eed0,0x80000000,&local_148);
  local_f8 = 0x2fe;
  uStack_16c = 6;
  uVar4 = (ulonglong)pcVar3 & 0xffffffffffffff00;
  local_178 = param_1;
  FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_e8,uVar4,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  uVar5 = (undefined4)(uVar4 >> 0x20);
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_188 = (undefined4)local_e8;
  uStack_184 = local_e8._4_4_;
  uStack_180 = uStack_e0;
  uStack_17c = uStack_dc;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_188);
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar2,DAT_141a09498,0x80000000,&local_118);
  local_f8 = 0x2ff;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_14c = 0;
  local_158 = 0x4048000000000000;
  uVar2 = (**(code **)(*param_1 + 8))(param_1,DAT_141a57250);
  FUN_140e87930(uVar2,DAT_1419f02f8,0x80000000,&local_158);
  local_f8 = 0x301;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  local_168 = 0;
  local_160 = 0;
  local_15c = 5;
  uStack_16c = 0xf;
  local_178 = (longlong *)0x100000200000167;
  local_188 = 0x167;
  uStack_184 = 0x1000002;
  uStack_180 = uStack_170;
  uStack_17c = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_188);
  local_68 = local_c8;
  local_188 = _DAT_1419ea530;
  uStack_184 = uRam00000001419ea534;
  uStack_180 = uRam00000001419ea538;
  uStack_17c = uRam00000001419ea53c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_188);
  local_188 = _DAT_1419df7a0;
  uStack_184 = uRam00000001419df7a4;
  uStack_180 = uRam00000001419df7a8;
  uStack_17c = uRam00000001419df7ac;
  local_60 = local_b8;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_188);
  local_58 = local_a8;
  local_188 = (undefined4)DAT_1419df7b0;
  uStack_184 = DAT_1419df7b0._4_4_;
  uStack_180 = DAT_1419df7b8;
  uStack_17c = DAT_1419df7bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_188);
  local_50 = local_98;
  local_188 = (undefined4)DAT_1419df7b0;
  uStack_184 = DAT_1419df7b0._4_4_;
  uStack_180 = DAT_1419df7b8;
  uStack_17c = DAT_1419df7bc;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_188);
  local_48 = local_88;
  local_78 = FUN_140e794b0(0xcccccccd,0x3ff4000000000000);
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  local_6c = 0;
  local_40 = &local_78;
  FUN_140e634e0(param_1,param_2,&local_168,6,CONCAT44(uVar5,DAT_141a0a2e8),&local_68);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_108;
  return param_3;
}

