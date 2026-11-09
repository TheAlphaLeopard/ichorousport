// gml_Script_draw_sprite_general_lit @ 0x1403adc10

undefined8 *
gml_Script_draw_sprite_general_lit
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffe70;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined8 local_d8;
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined4 local_98 [3];
  byte local_8c;
  uint local_88 [2];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined1 *local_48;
  undefined4 *local_40;
  
  local_120 = "gml_Script_lighting_system_light";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x131;
  FUN_140041df0(local_88,param_4,6,param_5);
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_108,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_16c = 0;
  local_178 = 0;
  local_13c = 0;
  local_148 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddea94) &&
     (_Init_thread_header(&DAT_141ddea94), DAT_141ddea94 == -1)) {
    DAT_141ddea70 = (longlong *)FUN_140e63aa0(DAT_1419f5448);
    _Init_thread_footer(&DAT_141ddea94);
  }
  local_118 = 0x131;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_88[0];
  if ((int)local_88[0] < 4) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_80[3];
  }
  iVar1 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar1 == 0) && (local_118 = 0x131, 3 < (int)local_88[0])) &&
     (puVar5 = (undefined8 *)local_80[3], puVar5 != &DAT_1419df7b0)) {
    local_158 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_150 = DAT_1419df7b8;
    uStack_14c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_158);
  }
  if ((int)local_88[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_80[4];
  }
  iVar1 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    uStack_14c = 0xd;
    local_158 = 0;
    if ((int)local_88[0] < 5) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_80[4];
      if (&local_158 == puVar5) goto LAB_1403ade2d;
    }
    local_168 = 0;
    uStack_160 = uStack_150;
    uStack_15c = 0xd;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_168);
  }
LAB_1403ade2d:
  if ((int)local_88[0] < 6) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_80[5];
  }
  iVar1 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_88[0] < 3) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_80[2];
    }
    uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
    uStack_160 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) == 0) {
      local_168 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_168);
    }
    uStack_14c = 0;
    local_158 = 0x3fe0000000000000;
    FUN_140042560(&local_168,&local_158);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if ((int)local_88[0] < 6) {
      puVar5 = &DAT_1419df7b0;
LAB_1403adef9:
      local_188 = (undefined4)local_168;
      uStack_184 = local_168._4_4_;
      uStack_180 = uStack_160;
      uStack_17c = uStack_15c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      FUN_140041b80(puVar5,&local_188);
    }
    else {
      puVar5 = (undefined8 *)local_80[5];
      if (&local_168 != puVar5) goto LAB_1403adef9;
    }
    if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
  }
  if (DAT_141ddc16a == '\0') {
    FUN_140e64380(DAT_141ddea70,"gml_Script_lighting_system_light");
    FUN_140e64380(param_1,"gml_Script_lighting_system_light");
  }
  local_118 = 0x132;
  if (DAT_141ddc16a == '\0') {
    DAT_141ddc16a = '\x01';
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar2 = (undefined4 *)(**(code **)(*DAT_141ddea70 + 0x10))(DAT_141ddea70,DAT_1419f5378);
    FUN_140e609c0(DAT_141ddea70);
    pcVar8 = (code *)0x0;
    puVar3 = (undefined4 *)gml_Script_lighting_system_sprite(param_1,param_2,&local_178,0,0);
    if (puVar3 != puVar2) {
      local_188 = *puVar3;
      uStack_184 = puVar3[1];
      uStack_180 = puVar3[2];
      uStack_17c = puVar3[3];
      if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_188);
    }
    FUN_140e60910(1);
  }
  local_118 = 0x134;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  local_178 = 0;
  local_170 = 0;
  local_16c = 5;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uVar4 = (**(code **)(*DAT_141ddea70 + 8))(DAT_141ddea70,DAT_1419f5378);
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5088,0x80000000,&local_138,uVar9,
                in_stack_fffffffffffffe70 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((int)local_88[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403ae0e9:
    local_188 = *(undefined4 *)puVar5;
    uStack_184 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_188);
  }
  else {
    puVar5 = (undefined8 *)*local_80;
    if (puVar5 != &local_108) goto LAB_1403ae0e9;
  }
  local_78 = &local_108;
  if ((int)local_88[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1403ae138:
    local_188 = *(undefined4 *)puVar5;
    uStack_184 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_188);
  }
  else {
    puVar5 = (undefined8 *)local_80[1];
    if (puVar5 != &local_f8) goto LAB_1403ae138;
  }
  local_70 = &local_f8;
  if ((int)local_88[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_1403ae187:
    local_188 = *(undefined4 *)puVar5;
    uStack_184 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_188);
  }
  else {
    puVar5 = (undefined8 *)local_80[2];
    if (puVar5 != &local_e8) goto LAB_1403ae187;
  }
  local_68 = &local_e8;
  if ((int)local_88[0] < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_1403ae1d6:
    local_188 = *(undefined4 *)puVar5;
    uStack_184 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_180 = *(undefined4 *)(puVar5 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    FUN_140041b80(&local_d8,&local_188);
  }
  else {
    puVar5 = (undefined8 *)local_80[3];
    if (puVar5 != &local_d8) goto LAB_1403ae1d6;
  }
  local_60 = &local_d8;
  if ((int)local_88[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_80[4];
    if (puVar5 == &local_c8) goto LAB_1403ae255;
  }
  local_188 = *(undefined4 *)puVar5;
  uStack_184 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_180 = *(undefined4 *)(puVar5 + 1);
  uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_188);
LAB_1403ae255:
  local_58 = &local_c8;
  if (((int)local_88[0] < 6) || (puVar6 = (undefined8 *)local_80[5], puVar6 != &local_b8)) {
    local_188 = *(undefined4 *)puVar6;
    uStack_184 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_180 = *(undefined4 *)(puVar6 + 1);
    uStack_17c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    FUN_140041b80(&local_b8,&local_188);
  }
  local_188 = (undefined4)local_138;
  uStack_184 = local_138._4_4_;
  uStack_180 = uStack_130;
  uStack_17c = uStack_12c;
  local_50 = &local_b8;
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_a8);
  }
  FUN_140041b80(local_a8,&local_188);
  local_48 = local_a8;
  uVar4 = CONCAT44(uVar10,DAT_1419fdca8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_148,6,uVar4,&local_78);
  uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != local_98) {
    local_188 = *puVar2;
    uStack_184 = puVar2[1];
    uStack_180 = puVar2[2];
    uStack_17c = puVar2[3];
    if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_188);
  }
  local_40 = local_98;
  FUN_140e634e0(param_1,param_2,&local_178,2,CONCAT44(uVar10,DAT_1419fe568),&local_48);
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,8,FUN_140041b30);
  if (0 < (int)local_88[0]) {
    puVar6 = local_80;
    do {
      puVar5 = (undefined8 *)*puVar6;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar6 = puVar6 + 1;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  FUN_140e4cd60(local_80);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

