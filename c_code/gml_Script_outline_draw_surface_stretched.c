// gml_Script_outline_draw_surface_stretched @ 0x14010ee00

undefined8 *
gml_Script_outline_draw_surface_stretched
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  undefined8 **ppuVar6;
  undefined4 uVar7;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined8 local_160;
  char *local_158;
  undefined4 local_150;
  undefined8 local_148;
  byte local_13c;
  undefined8 local_138;
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_108 [12];
  byte local_fc;
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
  uint local_98 [2];
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  local_158 = "gml_Script_outline_draw_surface";
  local_160 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_160;
  local_150 = 0x39c;
  FUN_140041df0(local_98,param_4,4,param_5);
  _eh_vector_constructor_iterator_(&local_148,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_150 = 0x39c;
  puVar5 = &DAT_1419df7b0;
  uVar4 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 4) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_90[3];
  }
  iVar1 = FUN_140e851f0(puVar3,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_150 = 0x39c;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_188 = 0;
    local_180 = 0;
    local_17c = 5;
    local_178 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_178);
    local_68 = local_108;
    local_178 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_178);
    local_60 = local_f8;
    local_178 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_178);
    local_58 = local_e8;
    local_178 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_178);
    local_50 = local_d8;
    local_178 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_178);
    local_48 = local_c8;
    local_178 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_178);
    local_178 = (undefined8 *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_170 = (char *)CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
    local_40 = local_b8;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_178);
    local_38 = local_a8;
    if ((int)local_98[0] < 4) {
      puVar3 = &DAT_1419df7b0;
    }
    else {
      puVar3 = (undefined8 *)local_90[3];
    }
    puVar2 = (undefined8 *)
             gml_Script_outline_bake_sprite_text(param_1,param_2,&local_188,7,&local_68);
    if (puVar2 != puVar3) {
      local_178 = (undefined8 *)*puVar2;
      uStack_170 = (char *)puVar2[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      FUN_140041b80(puVar3,&local_178);
    }
  }
  local_150 = 0x39d;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((int)local_98[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14010f183:
    local_178 = (undefined8 *)*puVar3;
    uStack_170 = (char *)puVar3[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  else {
    puVar3 = (undefined8 *)*local_90;
    if (puVar3 != &local_148) goto LAB_14010f183;
  }
  local_88 = &local_148;
  if ((int)local_98[0] < 4) {
    puVar3 = &DAT_1419df7b0;
LAB_14010f1d6:
    local_178 = (undefined8 *)*puVar3;
    uStack_170 = (char *)puVar3[1];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_178);
  }
  else {
    puVar3 = (undefined8 *)local_90[3];
    if (puVar3 != &local_138) goto LAB_14010f1d6;
  }
  local_80 = &local_138;
  ppuVar6 = &local_88;
  gml_Script_outline_draw_surface_ext(param_1,param_2,&local_188,2,ppuVar6);
  uVar7 = (undefined4)((ulonglong)ppuVar6 >> 0x20);
  local_150 = 0x39e;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  if ((int)local_98[0] < 1) {
    puVar3 = &DAT_1419df7b0;
LAB_14010f278:
    local_178 = (undefined8 *)*puVar3;
    uStack_170 = (char *)puVar3[1];
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_178);
  }
  else {
    puVar3 = (undefined8 *)*local_90;
    if (puVar3 != &local_148) goto LAB_14010f278;
  }
  local_88 = &local_148;
  if ((int)local_98[0] < 2) {
    puVar3 = &DAT_1419df7b0;
  }
  else {
    puVar3 = (undefined8 *)local_90[1];
    if (puVar3 == &local_138) goto LAB_14010f2fb;
  }
  local_178 = (undefined8 *)*puVar3;
  uStack_170 = (char *)puVar3[1];
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140041b80(&local_138,&local_178);
LAB_14010f2fb:
  local_80 = &local_138;
  if (((int)local_98[0] < 3) || (puVar5 = (undefined8 *)local_90[2], puVar5 != &local_128)) {
    local_178 = (undefined8 *)*puVar5;
    uStack_170 = (char *)puVar5[1];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_178);
  }
  local_78 = &local_128;
  FUN_140e634e0(param_1,param_2,&local_188,3,CONCAT44(uVar7,DAT_141a049d8),&local_88);
  local_150 = 0x39f;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_180 = 0;
  uStack_170 = "gml_Script_outline_end";
  local_178 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_178;
  local_17c = 5;
  local_188 = 0;
  local_168 = 0xc5;
  FUN_140ec9dc0();
  DAT_141dc7a50 = local_178;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,0xb,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar5 = local_90;
    do {
      puVar3 = (undefined8 *)*puVar5;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar3);
      }
      *puVar3 = 0;
      *(undefined4 *)(puVar3 + 1) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xc) = 5;
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_160;
  return param_3;
}

