// gml_Script_InputMotionSupported @ 0x140337af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputMotionSupported
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  undefined4 uVar12;
  undefined8 uVar10;
  undefined8 **ppuVar11;
  ulonglong in_stack_fffffffffffffea0;
  undefined8 **ppuVar13;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined4 local_f8 [3];
  byte local_ec;
  undefined8 local_e8;
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  char *local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined4 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  ppuVar13 = &local_88;
  local_c0 = "gml_Script_InputMotionIsCalibrated";
  local_c8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_c8;
  local_b8 = 5;
  FUN_140041df0(local_48,param_4,1,param_5);
  uVar12 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_14c = 0;
  local_158 = 0;
  local_12c = 0;
  local_138 = 0;
  local_a4 = 0;
  local_b0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde34c) &&
     (_Init_thread_header(&DAT_141dde34c), DAT_141dde34c == -1)) {
    DAT_141dde350 = (longlong *)FUN_140e63aa0(DAT_1419f1bd8);
    _Init_thread_footer(&DAT_141dde34c);
  }
  local_b8 = 5;
  puVar7 = &DAT_1419df7b0;
  uVar8 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_40;
  }
  iVar2 = FUN_140e851f0(puVar6,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_b8 = 5;
    if (0 < (int)local_48[0]) {
      puVar7 = (undefined8 *)*local_40;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
    *puVar7 = 0;
  }
  if (DAT_141ddc0f5 == '\0') {
    FUN_140e64380(DAT_141dde350,"gml_Script_InputMotionIsCalibrated");
    FUN_140e64380(param_1,"gml_Script_InputMotionIsCalibrated");
  }
  local_b8 = 7;
  if (DAT_141ddc0f5 == '\0') {
    DAT_141ddc0f5 = '\x01';
    puVar7 = (undefined8 *)(**(code **)(*DAT_141dde350 + 0x10))(DAT_141dde350,DAT_1419febe8);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar9 = 0;
    uVar4 = gml_Script__onOperaGXMobile_anon_93___InputOnOperaGXMobile___InputOnOperaGXMobile
                      (param_1,param_2,&local_158,0,0);
    uVar9 = uVar9 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419febc8,0x80000000,&local_58,uVar9,
                  in_stack_fffffffffffffea0 & 0xffffffffffffff00);
    uVar12 = (undefined4)(uVar9 >> 0x20);
    FUN_140e609c0(DAT_141dde350);
    if (&local_58 != puVar7) {
      local_148 = local_58;
      uStack_140 = uStack_50;
      uStack_13c = uStack_4c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_148);
    }
    FUN_140e60910(1);
  }
  local_b8 = 5;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_48[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_140337dfc:
    local_148 = *puVar7;
    uStack_140 = *(undefined4 *)(puVar7 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  else {
    puVar7 = (undefined8 *)*local_40;
    if (puVar7 != &local_118) goto LAB_140337dfc;
  }
  local_90 = &local_118;
  uVar10 = CONCAT44(uVar12,DAT_141a014a8);
  uVar4 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar10,&local_90);
  uVar12 = (undefined4)((ulonglong)uVar10 >> 0x20);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_b8 = 0xb;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b0);
    }
    local_b0 = 0;
    local_a8 = 0;
    local_a4 = 5;
    if ((int)local_48[0] < 1) {
      puVar7 = &DAT_1419df7b0;
LAB_140337ee8:
      local_148 = *puVar7;
      uStack_140 = *(undefined4 *)(puVar7 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_148);
    }
    else {
      puVar7 = (undefined8 *)*local_40;
      if (puVar7 != &local_108) goto LAB_140337ee8;
    }
    local_88 = &local_108;
    local_148 = CONCAT44(uRam0000000141dd07dc,_DAT_141dd07d8);
    uStack_140 = uRam0000000141dd07e0;
    uStack_13c = DAT_141dd07e4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_148);
    local_80 = local_f8;
    puVar7 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_b0,1,CONCAT44(uVar12,DAT_1419fdc58),ppuVar13);
    if (puVar7 != &local_e8) {
      local_148 = *puVar7;
      uStack_140 = *(undefined4 *)(puVar7 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_148);
    }
    local_78 = &local_e8;
    local_148 = CONCAT44(uRam0000000141dd07ec,_DAT_141dd07e8);
    uStack_140 = uRam0000000141dd07f0;
    uStack_13c = DAT_141dd07f4;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_148);
    local_70 = local_d8;
    FUN_14008e020(param_1,param_2,&local_138,3,&local_80);
  }
  local_b8 = 0x11;
  if ((int)local_48[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_40;
  }
  uStack_13c = 0;
  local_148 = 0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar7,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (uVar3 < 0x80000000) {
    local_b8 = 0x11;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_148 = CONCAT44(uRam0000000141dd07ac,_DAT_141dd07a8);
    uStack_140 = uRam0000000141dd07b0;
    uStack_13c = DAT_141dd07b4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
    local_90 = &local_118;
    if ((int)local_48[0] < 1) {
      puVar7 = &DAT_1419df7b0;
LAB_140338120:
      local_148 = *puVar7;
      uStack_140 = *(undefined4 *)(puVar7 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_148);
    }
    else {
      puVar7 = (undefined8 *)*local_40;
      if (puVar7 != &local_108) goto LAB_140338120;
    }
    local_88 = &local_108;
    local_148 = CONCAT44(uRam0000000141dd07cc,_DAT_141dd07c8);
    uStack_140 = uRam0000000141dd07d0;
    uStack_13c = DAT_141dd07d4;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_148);
    local_80 = local_f8;
    local_148 = CONCAT44(uRam00000001419e4104,_DAT_1419e4100);
    uStack_140 = uRam00000001419e4108;
    uStack_13c = uRam00000001419e410c;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_148);
    local_78 = &local_e8;
    local_148 = CONCAT44(uRam0000000141dd07bc,_DAT_141dd07b8);
    uStack_140 = uRam0000000141dd07c0;
    uStack_13c = DAT_141dd07c4;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_148);
    local_70 = local_d8;
    FUN_14008e020(param_1,param_2,&local_158,5,&local_90);
  }
  if ((int)local_48[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_40;
  }
  uStack_13c = 0;
  local_148 = 0;
  iVar2 = FUN_140e851f0(puVar7,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (iVar2 != -2 && iVar2 < 0) {
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_128 = _DAT_141dd07a8;
    uStack_124 = uRam0000000141dd07ac;
    uStack_120 = uRam0000000141dd07b0;
    uStack_11c = DAT_141dd07b4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_128);
    local_90 = &local_118;
    if ((int)local_48[0] < 1) {
      puVar7 = &DAT_1419df7b0;
LAB_140338315:
      local_128 = *(undefined4 *)puVar7;
      uStack_124 = *(undefined4 *)((longlong)puVar7 + 4);
      uStack_120 = *(undefined4 *)(puVar7 + 1);
      uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_128);
    }
    else {
      puVar7 = (undefined8 *)*local_40;
      if (puVar7 != &local_108) goto LAB_140338315;
    }
    local_88 = &local_108;
    local_128 = _DAT_141dd07f8;
    uStack_124 = uRam0000000141dd07fc;
    uStack_120 = uRam0000000141dd0800;
    uStack_11c = DAT_141dd0804;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_128);
    local_80 = local_f8;
    FUN_14008e020(param_1,param_2,&local_158,3,&local_90);
  }
  local_b8 = 0xb;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_138 = 0;
  local_130 = 0;
  local_12c = 5;
  puVar7 = (undefined8 *)(**(code **)(*DAT_141dde350 + 8))(DAT_141dde350,DAT_1419febe8);
  if ((int)local_48[0] < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*local_40;
    if (puVar6 == &local_118) goto LAB_14033846e;
  }
  local_128 = *(undefined4 *)puVar6;
  uStack_124 = *(undefined4 *)((longlong)puVar6 + 4);
  uStack_120 = *(undefined4 *)(puVar6 + 1);
  uStack_11c = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  FUN_140041b80(&local_118,&local_128);
LAB_14033846e:
  local_90 = &local_118;
  if (puVar7 != &local_108) {
    local_128 = *(undefined4 *)puVar7;
    uStack_124 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_120 = *(undefined4 *)(puVar7 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_128);
  }
  local_88 = &local_108;
  ppuVar11 = &local_90;
  puVar5 = (undefined4 *)gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_138,1,ppuVar11)
  ;
  uVar12 = (undefined4)((ulonglong)ppuVar11 >> 0x20);
  if (puVar5 != local_f8) {
    local_128 = *puVar5;
    uStack_124 = puVar5[1];
    uStack_120 = puVar5[2];
    uStack_11c = puVar5[3];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_128);
  }
  local_80 = local_f8;
  uVar9 = CONCAT44(uVar12,DAT_1419ff4f8);
  puVar7 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar9,ppuVar13);
  if (puVar7 != &local_a0) {
    local_128 = *(undefined4 *)puVar7;
    uStack_124 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_120 = *(undefined4 *)(puVar7 + 1);
    uStack_11c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_128);
  }
  local_b8 = 0xc;
  iVar2 = FUN_140e851f0(&local_a0,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_b8 = 0xc;
  }
  else {
    local_b8 = 0xe;
    FUN_140e87440(&local_a0,DAT_141a01dd8,0x80000000,&local_68,uVar9 & 0xffffffffffffff00,
                  (ulonglong)ppuVar13 & 0xffffffffffffff00);
    if (&local_68 != param_3) {
      local_128 = (undefined4)local_68;
      uStack_124 = local_68._4_4_;
      uStack_120 = uStack_60;
      uStack_11c = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_128);
    }
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar7 = local_40;
    do {
      puVar6 = (undefined8 *)*puVar7;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      *puVar6 = 0;
      *(undefined4 *)(puVar6 + 1) = 0;
      *(undefined4 *)((longlong)puVar6 + 0xc) = 5;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_c8;
  return param_3;
}

