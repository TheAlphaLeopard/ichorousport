// gml_Script___SetColor_anon_212___InputColorClassPlayer___InputColorClassPlayer @ 0x140069d10

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script___SetColor_anon_212___InputColorClassPlayer___InputColorClassPlayer
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  char *local_80;
  undefined4 local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 local_38 [12];
  byte local_2c;
  
  local_80 = "gml_Script___InputCollect";
  local_88 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_88;
  local_78 = 6;
  _eh_vector_constructor_iterator_(local_f8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_fc = 0;
  local_108 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddc504) {
    _Init_thread_header(&DAT_141ddc504);
    if (DAT_141ddc504 == -1) {
      DAT_141ddc510 = (longlong *)FUN_140e63aa0(DAT_1419fea58);
      _Init_thread_footer(&DAT_141ddc504);
    }
  }
  if (DAT_141ddc035 == '\0') {
    FUN_140e64380(DAT_141ddc510,"gml_Script___InputCollect");
    FUN_140e64380(param_1,"gml_Script___InputCollect");
  }
  local_78 = 0xb;
  if (DAT_141ddc035 == '\0') {
    DAT_141ddc035 = '\x01';
    puVar1 = (undefined4 *)(**(code **)(*DAT_141ddc510 + 0x10))(DAT_141ddc510,DAT_1419fea88);
    FUN_140e609c0(DAT_141ddc510);
    FUN_140e645a0(local_38,gml_GlobalScript___InputColorClassPlayer,0);
    puVar2 = (undefined4 *)FUN_140e63610(param_1,param_2,&local_108,0,local_38,0);
    if (puVar2 != puVar1) {
      local_118 = *puVar2;
      uStack_114 = puVar2[1];
      uStack_110 = puVar2[2];
      uStack_10c = puVar2[3];
      if ((1 << ((byte)puVar1[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar1);
      }
      FUN_140041b80(puVar1,&local_118);
    }
    if ((1 << (local_2c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_38);
    }
    FUN_140e60910(1);
  }
  local_78 = 0x1f;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  local_118 = _DAT_1419df8e0;
  uStack_114 = uRam00000001419df8e4;
  uStack_110 = uRam00000001419df8e8;
  uStack_10c = uRam00000001419df8ec;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_118);
  local_70 = local_f8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_118);
  local_68 = local_e8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_118);
  local_60 = local_d8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_118);
  local_58 = local_c8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_118);
  local_50 = local_b8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_118);
  local_48 = local_a8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  local_40 = local_98;
  gml_GlobalScript___InputPlugInRegisterCallbackInternal(param_1,param_2,&local_108,7,&local_70);
  local_78 = 0x20;
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  local_108 = 0;
  local_100 = 0;
  local_fc = 5;
  local_118 = _DAT_1419df8f0;
  uStack_114 = uRam00000001419df8f4;
  uStack_110 = uRam00000001419df8f8;
  uStack_10c = uRam00000001419df8fc;
  if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_f8);
  }
  FUN_140041b80(local_f8,&local_118);
  local_70 = local_f8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_e8);
  }
  FUN_140041b80(local_e8,&local_118);
  local_68 = local_e8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_d8);
  }
  FUN_140041b80(local_d8,&local_118);
  local_60 = local_d8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_c8);
  }
  FUN_140041b80(local_c8,&local_118);
  local_58 = local_c8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_118);
  local_50 = local_b8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_118);
  local_48 = local_a8;
  local_118 = (undefined4)DAT_1419df7b0;
  uStack_114 = DAT_1419df7b0._4_4_;
  uStack_110 = DAT_1419df7b8;
  uStack_10c = DAT_1419df7bc;
  if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_98);
  }
  FUN_140041b80(local_98,&local_118);
  local_40 = local_98;
  gml_GlobalScript___InputPlugInRegisterCallbackInternal(param_1,param_2,&local_108,7,&local_70);
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(local_f8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_88;
  return param_3;
}

