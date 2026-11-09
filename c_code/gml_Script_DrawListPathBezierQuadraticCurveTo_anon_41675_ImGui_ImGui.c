// gml_Script_DrawListPathBezierQuadraticCurveTo_anon_41675_ImGui_ImGui @ 0x1402aaf00

undefined8 *
gml_Script_DrawListPathBezierQuadraticCurveTo_anon_41675_ImGui_ImGui
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined1 local_148 [96];
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined8 local_98;
  byte local_8c;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 *local_30;
  
  local_160 = "gml_Script_DrawListPathArcToFast@anon@40593@ImGui@ImGui";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x4d9;
  _eh_vector_constructor_iterator_(local_148,0x10,0xc,FUN_1400424d0,FUN_140041b30);
  local_16c = 0;
  local_178 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x4da;
  puVar2 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar1 = &DAT_1419df7b0;
LAB_1402aafcf:
    local_188 = *(undefined4 *)puVar1;
    uStack_184 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_180 = *(undefined4 *)(puVar1 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_188);
  }
  else {
    puVar1 = (undefined8 *)*param_5;
    if (puVar1 != &local_e8) goto LAB_1402aafcf;
  }
  local_58 = &local_e8;
  if (param_4 < 2) {
    puVar1 = &DAT_1419df7b0;
LAB_1402ab01b:
    local_188 = *(undefined4 *)puVar1;
    uStack_184 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_180 = *(undefined4 *)(puVar1 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_188);
  }
  else {
    puVar1 = (undefined8 *)param_5[1];
    if (puVar1 != &local_d8) goto LAB_1402ab01b;
  }
  local_50 = &local_d8;
  if (param_4 < 3) {
    puVar1 = &DAT_1419df7b0;
LAB_1402ab068:
    local_188 = *(undefined4 *)puVar1;
    uStack_184 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_180 = *(undefined4 *)(puVar1 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_188);
  }
  else {
    puVar1 = (undefined8 *)param_5[2];
    if (puVar1 != &local_c8) goto LAB_1402ab068;
  }
  local_48 = &local_c8;
  if (param_4 < 4) {
    puVar1 = &DAT_1419df7b0;
LAB_1402ab0b5:
    local_188 = *(undefined4 *)puVar1;
    uStack_184 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_180 = *(undefined4 *)(puVar1 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_188);
  }
  else {
    puVar1 = (undefined8 *)param_5[3];
    if (puVar1 != &local_b8) goto LAB_1402ab0b5;
  }
  local_40 = &local_b8;
  if (param_4 < 5) {
    puVar1 = &DAT_1419df7b0;
  }
  else {
    puVar1 = (undefined8 *)param_5[4];
    if (puVar1 == &local_a8) goto LAB_1402ab12f;
  }
  local_188 = *(undefined4 *)puVar1;
  uStack_184 = *(undefined4 *)((longlong)puVar1 + 4);
  uStack_180 = *(undefined4 *)(puVar1 + 1);
  uStack_17c = *(undefined4 *)((longlong)puVar1 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_188);
LAB_1402ab12f:
  local_38 = &local_a8;
  if ((param_4 < 6) || (puVar2 = (undefined8 *)param_5[5], puVar2 != &local_98)) {
    local_188 = *(undefined4 *)puVar2;
    uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_180 = *(undefined4 *)(puVar2 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    FUN_140041b80(&local_98,&local_188);
  }
  local_30 = &local_98;
  puVar2 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,6,DAT_141a59730,&local_58);
  if (puVar2 != param_3) {
    local_188 = *(undefined4 *)puVar2;
    uStack_184 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_180 = *(undefined4 *)(puVar2 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(local_148,0x10,0xc,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

