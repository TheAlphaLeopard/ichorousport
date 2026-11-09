// gml_Script_draw_sprite_ext_lit @ 0x1403ad2e0

undefined8 *
gml_Script_draw_sprite_ext_lit
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
  ulonglong in_stack_fffffffffffffe50;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
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
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined4 local_a8 [3];
  byte local_9c;
  uint local_98 [2];
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
  undefined1 *local_40;
  undefined4 *local_38;
  
  local_160 = "gml_Script_lighting_system_sprite";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 300;
  FUN_140041df0(local_98,param_4,9,param_5);
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_148,0x10,0xb,FUN_1400424d0,FUN_140041b30);
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_18c = 0;
  local_198 = 0;
  local_17c = 0;
  local_188 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddea40) &&
     (_Init_thread_header(&DAT_141ddea40), DAT_141ddea40 == -1)) {
    DAT_141ddea88 = (longlong *)FUN_140e63aa0(DAT_1419f50d8);
    _Init_thread_footer(&DAT_141ddea40);
  }
  local_158 = 300;
  puVar6 = &DAT_1419df7b0;
  uVar7 = (ulonglong)local_98[0];
  if ((int)local_98[0] < 5) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_90[4];
  }
  iVar1 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    local_158 = 300;
    if ((int)local_98[0] < 5) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_90[4];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3ff0000000000000;
  }
  if ((int)local_98[0] < 6) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_90[5];
  }
  iVar1 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_98[0] < 6) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_90[5];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3ff0000000000000;
  }
  if ((int)local_98[0] < 7) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_90[6];
  }
  iVar1 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_98[0] < 7) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_90[6];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
  }
  if ((int)local_98[0] < 8) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_90[7];
  }
  iVar1 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_98[0] < 8) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_90[7];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x416fffffe0000000;
  }
  if ((int)local_98[0] < 9) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_90[8];
  }
  iVar1 = FUN_140e851f0(puVar5,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar1 == 0) {
    if ((int)local_98[0] < 9) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)local_90[8];
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3ff0000000000000;
  }
  if (DAT_141ddc169 == '\0') {
    FUN_140e64380(DAT_141ddea88,"gml_Script_lighting_system_sprite");
    FUN_140e64380(param_1,"gml_Script_lighting_system_sprite");
  }
  local_158 = 0x12d;
  if (DAT_141ddc169 == '\0') {
    DAT_141ddc169 = '\x01';
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    puVar2 = (undefined4 *)(**(code **)(*DAT_141ddea88 + 0x10))(DAT_141ddea88,DAT_1419f5378);
    FUN_140e609c0(DAT_141ddea88);
    pcVar8 = (code *)0x0;
    puVar3 = (undefined4 *)gml_Script_lighting_system_sprite(param_1,param_2,&local_198,0,0);
    if (puVar3 != puVar2) {
      local_1a8 = *puVar3;
      uStack_1a4 = puVar3[1];
      uStack_1a0 = puVar3[2];
      uStack_19c = puVar3[3];
      if ((1 << ((byte)puVar2[3] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      FUN_140041b80(puVar2,&local_1a8);
    }
    FUN_140e60910(1);
  }
  local_158 = 0x12f;
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  local_198 = 0;
  local_190 = 0;
  local_18c = 5;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  local_188 = 0;
  local_180 = 0;
  local_17c = 5;
  uVar4 = (**(code **)(*DAT_141ddea88 + 8))(DAT_141ddea88,DAT_1419f5378);
  uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
  FUN_140e87440(uVar4,DAT_1419f5048,0x80000000,&local_178,uVar9,
                in_stack_fffffffffffffe50 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((int)local_98[0] < 1) {
    puVar5 = &DAT_1419df7b0;
LAB_1403ad791:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)*local_90;
    if (puVar5 != &local_148) goto LAB_1403ad791;
  }
  local_88 = &local_148;
  if ((int)local_98[0] < 2) {
    puVar5 = &DAT_1419df7b0;
LAB_1403ad7e0:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)local_90[1];
    if (puVar5 != &local_138) goto LAB_1403ad7e0;
  }
  local_80 = &local_138;
  if ((int)local_98[0] < 3) {
    puVar5 = &DAT_1419df7b0;
LAB_1403ad82f:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)local_90[2];
    if (puVar5 != &local_128) goto LAB_1403ad82f;
  }
  local_78 = &local_128;
  if ((int)local_98[0] < 4) {
    puVar5 = &DAT_1419df7b0;
LAB_1403ad87e:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)local_90[3];
    if (puVar5 != &local_118) goto LAB_1403ad87e;
  }
  local_70 = &local_118;
  if ((int)local_98[0] < 5) {
    puVar5 = &DAT_1419df7b0;
LAB_1403ad8cd:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)local_90[4];
    if (puVar5 != &local_108) goto LAB_1403ad8cd;
  }
  local_68 = &local_108;
  if ((int)local_98[0] < 6) {
    puVar5 = &DAT_1419df7b0;
LAB_1403ad91c:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)local_90[5];
    if (puVar5 != &local_f8) goto LAB_1403ad91c;
  }
  local_60 = &local_f8;
  if ((int)local_98[0] < 7) {
    puVar5 = &DAT_1419df7b0;
LAB_1403ad96b:
    local_1a8 = *(undefined4 *)puVar5;
    uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
    uStack_1a0 = *(undefined4 *)(puVar5 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_1a8);
  }
  else {
    puVar5 = (undefined8 *)local_90[6];
    if (puVar5 != &local_e8) goto LAB_1403ad96b;
  }
  local_58 = &local_e8;
  if ((int)local_98[0] < 8) {
    puVar5 = &DAT_1419df7b0;
  }
  else {
    puVar5 = (undefined8 *)local_90[7];
    if (puVar5 == &local_d8) goto LAB_1403ad9ed;
  }
  local_1a8 = *(undefined4 *)puVar5;
  uStack_1a4 = *(undefined4 *)((longlong)puVar5 + 4);
  uStack_1a0 = *(undefined4 *)(puVar5 + 1);
  uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
  if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  FUN_140041b80(&local_d8,&local_1a8);
LAB_1403ad9ed:
  local_50 = &local_d8;
  if (((int)local_98[0] < 9) || (puVar6 = (undefined8 *)local_90[8], puVar6 != &local_c8)) {
    local_1a8 = *(undefined4 *)puVar6;
    uStack_1a4 = *(undefined4 *)((longlong)puVar6 + 4);
    uStack_1a0 = *(undefined4 *)(puVar6 + 1);
    uStack_19c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1a8);
  }
  local_48 = &local_c8;
  local_1a8 = (undefined4)local_178;
  uStack_1a4 = local_178._4_4_;
  uStack_1a0 = uStack_170;
  uStack_19c = uStack_16c;
  if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_b8);
  }
  FUN_140041b80(local_b8,&local_1a8);
  local_40 = local_b8;
  uVar4 = CONCAT44(uVar10,DAT_1419fdca8);
  puVar2 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_188,9,uVar4,&local_88);
  uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
  if (puVar2 != local_a8) {
    local_1a8 = *puVar2;
    uStack_1a4 = puVar2[1];
    uStack_1a0 = puVar2[2];
    uStack_19c = puVar2[3];
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1a8);
  }
  local_38 = local_a8;
  FUN_140e634e0(param_1,param_2,&local_198,2,CONCAT44(uVar10,DAT_1419fe568),&local_40);
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  _eh_vector_destructor_iterator_(&local_148,0x10,0xb,FUN_140041b30);
  if (0 < (int)local_98[0]) {
    puVar6 = local_90;
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
  FUN_140e4cd60(local_90);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

