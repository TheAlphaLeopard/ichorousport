// gml_GlobalScript___scribble_constants @ 0x140179940

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript___scribble_constants(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  sbyte sVar7;
  sbyte sVar8;
  sbyte sVar9;
  sbyte local_res18;
  undefined4 uVar10;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  ulonglong local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  ulonglong local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  ulonglong local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  ulonglong local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined8 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined4 *local_48;
  
  local_f0 = "gml_Script___scribble_config_colours";
  local_f8 = DAT_141dc7a50;
  local_e8 = 9;
  uVar10 = 1;
  DAT_141dc7a50 = &local_f8;
  _eh_vector_constructor_iterator_(local_d8,0x10,9,FUN_1400424d0,FUN_140041b30);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a08328);
  sVar8 = 0;
  local_14c = 0;
  local_158 = 0;
  sVar9 = 0;
  uStack_15c = 0;
  local_168 = 0;
  local_res18 = 0;
  uStack_16c = 0;
  local_178 = 0;
  sVar7 = 0;
  uStack_17c = 0;
  local_188 = 0;
  uStack_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddd0f8) {
    _Init_thread_header(&DAT_141ddd0f8);
    if (DAT_141ddd0f8 == -1) {
      DAT_141ddd0e8 = (longlong *)FUN_140e63aa0(DAT_141a08098);
      _Init_thread_footer(&DAT_141ddd0f8);
    }
  }
  if (DAT_141ddc08b == '\0') {
    FUN_140e64380(DAT_141ddd0e8,"gml_Script___scribble_config_colours");
    FUN_140e64380(param_1,"gml_Script___scribble_config_colours");
  }
  local_e8 = 0xb;
  if (DAT_141ddc08b == '\0') {
    DAT_141ddc08b = '\x01';
    local_48 = (undefined4 *)(**(code **)(*DAT_141ddd0e8 + 0x10))(DAT_141ddd0e8,DAT_141a084e8);
    local_1c8 = (undefined8 *)CONCAT44(uRam00000001419e1eb4,_DAT_1419e1eb0);
    uStack_1c0 = (char *)CONCAT44(uRam00000001419e1ebc,uRam00000001419e1eb8);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_1c8);
    local_148 = local_d8;
    local_1c8 = (undefined8 *)CONCAT44(uRam00000001419e1ed4,_DAT_1419e1ed0);
    uStack_1c0 = (char *)CONCAT44(uRam00000001419e1edc,uRam00000001419e1ed8);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1c8);
    local_140 = local_c8;
    local_1c8 = (undefined8 *)CONCAT44(uRam00000001419e1ee4,_DAT_1419e1ee0);
    uStack_1c0 = (char *)CONCAT44(uRam00000001419e1eec,uRam00000001419e1ee8);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1c8);
    local_138 = local_b8;
    local_1c8._0_4_ = _DAT_1419e1ec0;
    local_1c8._4_4_ = uRam00000001419e1ec4;
    uStack_1c0._0_4_ = uRam00000001419e1ec8;
    uStack_1c0._4_4_ = uRam00000001419e1ecc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1c8);
    local_130 = local_a8;
    FUN_140e609c0(DAT_141a729d8);
    FUN_140e645a0(&local_1c8,gml_GlobalScript___scribble_config_defaults,0);
    if (&local_1c8 != puVar3) {
      local_1a8 = (undefined4)local_1c8;
      uStack_1a4 = local_1c8._4_4_;
      uStack_1a0 = (undefined4)uStack_1c0;
      uStack_19c = uStack_1c0._4_4_;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_1a8);
    }
    FUN_140e60910(1);
    if (puVar3 != &local_98) {
      local_1a8 = *(undefined4 *)puVar3;
      uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
      uStack_1a0 = *(undefined4 *)(puVar3 + 1);
      uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_98);
      }
      FUN_140041b80(&local_98,&local_1a8);
    }
    if ((1 << ((byte)uStack_1c0._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_128 = &local_98;
    uStack_1c0 = "gml_Script_scribble_rgb_to_bgr";
    local_1c8 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_1c8;
    uStack_15c = 5;
    local_168 = 0;
    local_1b8 = 8;
    uVar4 = FUN_140e4a8b0(local_148);
    lVar5 = FUN_140e4a8b0(local_148);
    bVar2 = FUN_140e4a8b0(local_148);
    local_168 = (ulonglong)bVar2 << 0x10 | lVar5 >> 0x10 & 0xffU | uVar4 & 0xff00ff00;
    sVar9 = 10;
    uStack_15c = 10;
    DAT_141dc7a50 = local_1c8;
    local_1a8 = (undefined4)local_168;
    uStack_1a4 = 0;
    uStack_1a0 = uStack_160;
    uStack_19c = 10;
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1a8);
    local_120 = local_88;
    uStack_1c0 = "gml_Script_scribble_rgb_to_bgr";
    local_1c8 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_1c8;
    uStack_16c = 5;
    local_178 = 0;
    local_1b8 = 8;
    uVar4 = FUN_140e4a8b0(local_140);
    lVar5 = FUN_140e4a8b0(local_140);
    bVar2 = FUN_140e4a8b0(local_140);
    local_178 = (ulonglong)bVar2 << 0x10 | lVar5 >> 0x10 & 0xffU | uVar4 & 0xff00ff00;
    local_res18 = 10;
    uStack_16c = 10;
    DAT_141dc7a50 = local_1c8;
    local_1a8 = (undefined4)local_178;
    uStack_1a4 = 0;
    uStack_1a0 = uStack_170;
    uStack_19c = 10;
    if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_1a8);
    local_118 = local_78;
    uStack_1c0 = "gml_Script_scribble_rgb_to_bgr";
    local_1c8 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_1c8;
    uStack_17c = 5;
    local_188 = 0;
    local_1b8 = 8;
    uVar4 = FUN_140e4a8b0(local_138);
    lVar5 = FUN_140e4a8b0(local_138);
    bVar2 = FUN_140e4a8b0(local_138);
    local_188 = (ulonglong)bVar2 << 0x10 | lVar5 >> 0x10 & 0xffU | uVar4 & 0xff00ff00;
    sVar7 = 10;
    uStack_17c = 10;
    DAT_141dc7a50 = local_1c8;
    local_1a8 = (undefined4)local_188;
    uStack_1a4 = 0;
    uStack_1a0 = uStack_180;
    uStack_19c = 10;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_1a8);
    local_110 = local_68;
    uStack_1c0 = "gml_Script_scribble_rgb_to_bgr";
    local_1c8 = DAT_141dc7a50;
    DAT_141dc7a50 = &local_1c8;
    uStack_18c = 5;
    local_198 = 0;
    local_1b8 = 8;
    uVar4 = FUN_140e4a8b0(local_130);
    lVar5 = FUN_140e4a8b0(local_130);
    bVar2 = FUN_140e4a8b0(local_130);
    local_198 = (ulonglong)bVar2 << 0x10 | lVar5 >> 0x10 & 0xffU | uVar4 & 0xff00ff00;
    sVar8 = 10;
    uStack_18c = 10;
    DAT_141dc7a50 = local_1c8;
    local_1a8 = (undefined4)local_198;
    uStack_1a4 = 0;
    uStack_1a0 = uStack_190;
    uStack_19c = 10;
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_1a8);
    local_108 = local_58;
    FUN_140e609c0(DAT_141ddd0e8);
    puVar6 = (undefined4 *)
             FUN_140e634e0(param_1,param_2,&local_158,5,CONCAT44(uVar10,DAT_1419fd6d8),&local_128);
    puVar1 = local_48;
    if (puVar6 != local_48) {
      local_1a8 = *puVar6;
      uStack_1a4 = puVar6[1];
      uStack_1a0 = puVar6[2];
      uStack_19c = puVar6[3];
      if ((1 << ((byte)local_48[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_48);
      }
      FUN_140041b80(puVar1,&local_1a8);
    }
    FUN_140e60910(1);
  }
  local_e8 = 0x48;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141ddd0e8 + 8))(DAT_141ddd0e8,DAT_141a084e8);
  if (puVar3 != param_3) {
    local_1a8 = *(undefined4 *)puVar3;
    uStack_1a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_1a0 = *(undefined4 *)(puVar3 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_1a8);
  }
  if ((1 << sVar8 & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << sVar7 & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << local_res18 & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << sVar9 & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(local_d8,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return param_3;
}

