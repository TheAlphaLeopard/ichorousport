// gml_Script_DrawlistPushClipRectFullscreen_anon_44435_ImGui_ImGui @ 0x1402ac6d0

undefined8 *
gml_Script_DrawlistPushClipRectFullscreen_anon_44435_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  undefined4 uVar5;
  undefined8 uVar4;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  undefined1 local_258 [160];
  undefined8 local_1b8;
  byte local_1ac;
  undefined8 local_1a8;
  byte local_19c;
  undefined8 local_198;
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
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
  undefined4 local_f8 [3];
  byte local_ec;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined4 *local_38;
  
  local_270 = "gml_Script_DrawListAddImageRounded@anon@43384@ImGui@ImGui";
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  local_268 = 0x523;
  uVar5 = 1;
  _eh_vector_constructor_iterator_(local_258,0x10,0x17,FUN_1400424d0,FUN_140041b30);
  local_27c = 0;
  local_288 = 0;
  local_28c = 0;
  local_298 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_268 = 0x524;
  puVar3 = &DAT_1419df7b0;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1402ac7ab:
    local_2a8 = *(undefined4 *)puVar1;
    uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_2a0 = *(undefined4 *)(puVar1 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_2a8);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_1b8) goto LAB_1402ac7ab;
  }
  local_98 = &local_1b8;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_1402ac7fb:
    local_2a8 = *(undefined4 *)puVar1;
    uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_2a0 = *(undefined4 *)(puVar1 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_2a8);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_1a8) goto LAB_1402ac7fb;
  }
  local_90 = &local_1a8;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1402ac849:
    local_2a8 = *(undefined4 *)puVar1;
    uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_2a0 = *(undefined4 *)(puVar1 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_2a8);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_198) goto LAB_1402ac849;
  }
  local_88 = &local_198;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1402ac898:
    local_2a8 = *(undefined4 *)puVar1;
    uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_2a0 = *(undefined4 *)(puVar1 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_2a8);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_188) goto LAB_1402ac898;
  }
  local_80 = &local_188;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_1402ac8e8:
    local_2a8 = *(undefined4 *)puVar1;
    uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_2a0 = *(undefined4 *)(puVar1 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_2a8);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_178) goto LAB_1402ac8e8;
  }
  local_78 = &local_178;
  if (param_4 < 4) {
    puVar1 = &DAT_1419df7b0;
LAB_1402ac938:
    local_2a8 = *(undefined4 *)puVar1;
    uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_2a0 = *(undefined4 *)(puVar1 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_2a8);
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
    if (puVar1 != &local_168) goto LAB_1402ac938;
  }
  local_70 = &local_168;
  if (param_4 < 5) {
    puVar1 = &DAT_1419df7b0;
LAB_1402ac98b:
    local_2a8 = *(undefined4 *)puVar1;
    uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_2a0 = *(undefined4 *)(puVar1 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_2a8);
  }
  else {
    puVar1 = (undefined8 *)param_5[4];
    if (puVar1 != &local_158) goto LAB_1402ac98b;
  }
  local_68 = &local_158;
  if (param_4 < 6) {
    puVar1 = &DAT_1419df7b0;
LAB_1402ac9ea:
    local_2a8 = *(undefined4 *)puVar1;
    uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_2a0 = *(undefined4 *)(puVar1 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_2a8);
  }
  else {
    puVar1 = (undefined8 *)param_5[5];
    if (puVar1 != &local_148) goto LAB_1402ac9ea;
  }
  local_60 = &local_148;
  if (param_4 < 7) {
    puVar1 = &DAT_1419df7b0;
LAB_1402aca49:
    local_2a8 = *(undefined4 *)puVar1;
    uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_2a0 = *(undefined4 *)(puVar1 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_2a8);
  }
  else {
    puVar1 = (undefined8 *)param_5[6];
    if (puVar1 != &local_138) goto LAB_1402aca49;
  }
  local_58 = &local_138;
  if (param_4 < 8) {
    puVar1 = &DAT_1419df7b0;
LAB_1402acaa8:
    local_2a8 = *(undefined4 *)puVar1;
    uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_2a0 = *(undefined4 *)(puVar1 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_2a8);
  }
  else {
    puVar1 = (undefined8 *)param_5[7];
    if (puVar1 != &local_128) goto LAB_1402acaa8;
  }
  local_50 = &local_128;
  if (param_4 < 9) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[8];
    if (puVar1 == &local_118) goto LAB_1402acb3d;
  }
  local_2a8 = *(undefined4 *)puVar1;
  uStack_2a4 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_2a0 = *(undefined4 *)(puVar1 + 1);
  uStack_29c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_2a8);
LAB_1402acb3d:
  local_48 = &local_118;
  if ((param_4 < 10) || (puVar3 = (undefined8 *)param_5[9], puVar3 != &local_108)) {
    local_2a8 = *(undefined4 *)puVar3;
    uStack_2a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_2a0 = *(undefined4 *)(puVar3 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_2a8);
  }
  local_40 = &local_108;
  uVar4 = CONCAT44(uVar5,DAT_141a04898);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_298,2,uVar4,&local_98);
  uVar5 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != local_f8) {
    local_2a8 = *puVar2;
    uStack_2a4 = puVar2[1];
    uStack_2a0 = puVar2[2];
    uStack_29c = puVar2[3];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_2a8);
  }
  local_38 = local_f8;
  puVar3 = (undefined8 *)
           FUN_140e634e0(param_1,param_2,&local_288,0xb,CONCAT44(uVar5,DAT_141a59730),&local_88);
  if (puVar3 != param_3) {
    local_2a8 = *(undefined4 *)puVar3;
    uStack_2a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_2a0 = *(undefined4 *)(puVar3 + 1);
    uStack_29c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_2a8);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  _eh_vector_destructor_iterator_(local_258,0x10,0x17,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_278;
  return param_3;
}

