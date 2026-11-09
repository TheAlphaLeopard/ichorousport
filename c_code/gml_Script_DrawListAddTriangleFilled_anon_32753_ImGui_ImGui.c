// gml_Script_DrawListAddTriangleFilled_anon_32753_ImGui_ImGui @ 0x1402a63e0

undefined8 *
gml_Script_DrawListAddTriangleFilled_anon_32753_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  char *local_220;
  undefined4 local_218;
  undefined1 local_208 [160];
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_220 = "gml_Script_DrawListAddQuadFilled@anon@31668@ImGui@ImGui";
  local_228 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_228;
  local_218 = 0x3e4;
  _eh_vector_constructor_iterator_(local_208,0x10,0x14,FUN_1400424d0,FUN_140041b30);
  local_22c = 0;
  local_238 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_218 = 0x3e5;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1402a64af:
    local_248 = *(undefined4 *)puVar1;
    uStack_244 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_240 = *(undefined4 *)(puVar1 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_248);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_168) goto LAB_1402a64af;
  }
  local_78 = &local_168;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1402a64fe:
    local_248 = *(undefined4 *)puVar1;
    uStack_244 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_240 = *(undefined4 *)(puVar1 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_248);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_158) goto LAB_1402a64fe;
  }
  local_70 = &local_158;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_1402a654e:
    local_248 = *(undefined4 *)puVar1;
    uStack_244 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_240 = *(undefined4 *)(puVar1 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_248);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_148) goto LAB_1402a654e;
  }
  local_68 = &local_148;
  if (param_4 < 4) {
    puVar1 = &DAT_1419df7b0;
LAB_1402a659e:
    local_248 = *(undefined4 *)puVar1;
    uStack_244 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_240 = *(undefined4 *)(puVar1 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_248);
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
    if (puVar1 != &local_138) goto LAB_1402a659e;
  }
  local_60 = &local_138;
  if (param_4 < 5) {
    puVar1 = &DAT_1419df7b0;
LAB_1402a65ee:
    local_248 = *(undefined4 *)puVar1;
    uStack_244 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_240 = *(undefined4 *)(puVar1 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_248);
  }
  else {
    puVar1 = (undefined8 *)param_5[4];
    if (puVar1 != &local_128) goto LAB_1402a65ee;
  }
  local_58 = &local_128;
  if (param_4 < 6) {
    puVar1 = &DAT_1419df7b0;
LAB_1402a663e:
    local_248 = *(undefined4 *)puVar1;
    uStack_244 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_240 = *(undefined4 *)(puVar1 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_248);
  }
  else {
    puVar1 = (undefined8 *)param_5[5];
    if (puVar1 != &local_118) goto LAB_1402a663e;
  }
  local_50 = &local_118;
  if (param_4 < 7) {
    puVar1 = &DAT_1419df7b0;
LAB_1402a668e:
    local_248 = *(undefined4 *)puVar1;
    uStack_244 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_240 = *(undefined4 *)(puVar1 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_248);
  }
  else {
    puVar1 = (undefined8 *)param_5[6];
    if (puVar1 != &local_108) goto LAB_1402a668e;
  }
  local_48 = &local_108;
  if (param_4 < 8) {
    puVar1 = &DAT_1419df7b0;
LAB_1402a66e1:
    local_248 = *(undefined4 *)puVar1;
    uStack_244 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_240 = *(undefined4 *)(puVar1 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_248);
  }
  else {
    puVar1 = (undefined8 *)param_5[7];
    if (puVar1 != &local_f8) goto LAB_1402a66e1;
  }
  local_40 = &local_f8;
  if (param_4 < 9) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[8];
    if (puVar1 == &local_e8) goto LAB_1402a6776;
  }
  local_248 = *(undefined4 *)puVar1;
  uStack_244 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_240 = *(undefined4 *)(puVar1 + 1);
  uStack_23c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_248);
LAB_1402a6776:
  local_38 = &local_e8;
  if ((param_4 < 10) || (puVar2 = (undefined8 *)param_5[9], puVar2 != &local_d8)) {
    local_248 = *(undefined4 *)puVar2;
    uStack_244 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_240 = *(undefined4 *)(puVar2 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_248);
  }
  local_30 = &local_d8;
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_238,10,DAT_141a59730,&local_78);
  if (puVar2 != param_3) {
    local_248 = *(undefined4 *)puVar2;
    uStack_244 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_240 = *(undefined4 *)(puVar2 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_248);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  _eh_vector_destructor_iterator_(local_208,0x10,0x14,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_228;
  return param_3;
}

