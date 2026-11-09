// gml_Object_oTumorTera_Step_0 @ 0x140df2500

void gml_Object_oTumorTera_Step_0(longlong *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  uint *puVar2;
  uint *puVar3;
  code *pcVar4;
  ulonglong uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  ulonglong in_stack_fffffffffffffed0;
  undefined8 local_128;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_a8;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  uint local_58 [3];
  byte local_4c;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  undefined1 *local_30;
  uint *local_28;
  
  local_d0 = "gml_Object_oTumorTera_Create_0";
  local_c8 = 0;
  local_d8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_d8;
  pcVar4 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_98,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_b4 = 0xffffff;
  local_c0 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_c8 = 3;
  FUN_140e98b30(param_1,param_2);
  local_c8 = 5;
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  local_dc = 0;
  local_e8 = 0x3ff0000000000000;
  FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_e8);
  local_c8 = 6;
  uStack_11c = 6;
  uVar5 = (ulonglong)pcVar4 & 0xffffffffffffff00;
  local_128 = param_1;
  FUN_140e87440(&local_128,DAT_141a0f7f8,0x80000000,&local_a8,uVar5,
                in_stack_fffffffffffffed0 & 0xffffffffffffff00);
  uVar7 = (undefined4)(uVar5 >> 0x20);
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  local_128 = (longlong *)local_a8;
  uStack_120 = uStack_a0;
  uStack_11c = uStack_9c;
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  FUN_140041b80(&local_c0,&local_128);
  FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_c0);
  local_c8 = 8;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57e00);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_c8 = 10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02698);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0x4054000000000000;
  local_c8 = 0xb;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a06248);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar1);
  }
  *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
  *puVar1 = 0;
  local_c8 = 0xd;
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  local_f8 = 0;
  local_f0 = 0;
  local_ec = 5;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  puVar2 = (uint *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f0c08);
  uStack_11c = 0xf;
  local_128 = (longlong *)0x1000002000001b3;
  local_118 = 0x1b3;
  uStack_114 = 0x1000002;
  uStack_110 = uStack_120;
  uStack_10c = 0xf;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  local_48 = local_98;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x1000002000001b4;
  local_118 = 0x1b4;
  uStack_114 = 0x1000002;
  uStack_110 = uStack_120;
  uStack_10c = 0xf;
  if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_88);
  }
  FUN_140041b80(local_88,&local_118);
  local_40 = local_88;
  uStack_11c = 0xf;
  local_128 = (longlong *)0x1000002000001b5;
  local_118 = 0x1b5;
  uStack_114 = 0x1000002;
  uStack_110 = uStack_120;
  uStack_10c = 0xf;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_118);
  local_38 = local_78;
  local_118 = DAT_1419ef3f8 & 0xffffff;
  uStack_114 = (int)(DAT_1419ef3f8 | 0x5000000) >> 0x18 & 0xff;
  if (uStack_114 == 0xf) {
    uStack_114 = 0x4000004;
  }
  else {
    uStack_114 = uStack_114 | 0x1000000;
  }
  uStack_11c = 0xf;
  local_128 = (longlong *)(CONCAT44(uStack_114,DAT_1419ef3f8) & 0xffffffff00ffffff);
  uStack_110 = uStack_120;
  uStack_10c = 0xf;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_118);
  local_30 = local_68;
  uVar6 = CONCAT44(uVar7,DAT_1419fdca8);
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_108,3,uVar6,&local_48);
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (puVar3 != local_58) {
    local_118 = *puVar3;
    uStack_114 = puVar3[1];
    uStack_110 = puVar3[2];
    uStack_10c = puVar3[3];
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_118);
  }
  local_28 = local_58;
  FUN_140e609c0(param_1);
  puVar3 = (uint *)FUN_140e634e0(param_1,param_2,&local_f8,2,CONCAT44(uVar7,DAT_1419fd6d8),&local_30
                                );
  if (puVar3 != puVar2) {
    local_118 = *puVar3;
    uStack_114 = puVar3[1];
    uStack_110 = puVar3[2];
    uStack_10c = puVar3[3];
    if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_118);
  }
  FUN_140e60910(1);
  local_c8 = 0x10;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02a98);
  FUN_140e609c0(param_1);
  FUN_140e645a0(&local_128,gml_Object_oTutClear_Step_0,param_1);
  if (&local_128 != puVar1) {
    local_118 = (uint)local_128;
    uStack_114 = local_128._4_4_;
    uStack_110 = uStack_120;
    uStack_10c = uStack_11c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_118);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_d8;
  return;
}

