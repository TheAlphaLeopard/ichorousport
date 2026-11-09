// gml_Script_InputMotionGet @ 0x140335da0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_InputMotionGet
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  undefined8 **ppuVar12;
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
  undefined8 local_128;
  undefined4 local_11c;
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
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  char *local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
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
  undefined4 local_4c;
  uint local_48 [2];
  undefined8 *local_40;
  
  ppuVar13 = &local_88;
  local_b0 = "gml_Script_InputMotionCalibrate";
  local_b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_b8;
  local_a8 = 5;
  FUN_140041df0(local_48,param_4,1,param_5);
  uVar4 = 1;
  _eh_vector_constructor_iterator_(&local_118,0x10,5,FUN_1400424d0,FUN_140041b30);
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_14c = 0;
  local_158 = 0;
  local_12c = 0;
  local_138 = 0;
  local_94 = 0;
  local_a0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde338) &&
     (_Init_thread_header(&DAT_141dde338), DAT_141dde338 == -1)) {
    DAT_141dde330 = (longlong *)FUN_140e63aa0(DAT_1419f1b78);
    _Init_thread_footer(&DAT_141dde338);
  }
  local_a8 = 5;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_48[0];
  if ((int)local_48[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_40;
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 5;
    if (0 < (int)local_48[0]) {
      puVar8 = (undefined8 *)*local_40;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar8);
    }
    *(undefined4 *)((longlong)puVar8 + 0xc) = 0;
    *puVar8 = 0;
  }
  if (DAT_141ddc0f3 == '\0') {
    FUN_140e64380(DAT_141dde330,"gml_Script_InputMotionCalibrate");
    FUN_140e64380(param_1,"gml_Script_InputMotionCalibrate");
  }
  local_a8 = 7;
  if (DAT_141ddc0f3 == '\0') {
    DAT_141ddc0f3 = '\x01';
    puVar8 = (undefined8 *)(**(code **)(*DAT_141dde330 + 0x10))(DAT_141dde330,DAT_1419febe8);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    uVar10 = 0;
    uVar5 = gml_Script__onOperaGXMobile_anon_93___InputOnOperaGXMobile___InputOnOperaGXMobile
                      (param_1,param_2,&local_158,0,0);
    uVar10 = uVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_1419febc8,0x80000000,&local_68,uVar10,
                  in_stack_fffffffffffffea0 & 0xffffffffffffff00);
    uVar4 = (undefined4)(uVar10 >> 0x20);
    FUN_140e609c0(DAT_141dde330);
    if (&local_68 != puVar8) {
      local_148 = local_68;
      uStack_140 = uStack_60;
      uStack_13c = uStack_5c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar8);
      }
      FUN_140041b80(puVar8,&local_148);
    }
    FUN_140e60910(1);
  }
  local_a8 = 5;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  if ((int)local_48[0] < 1) {
    puVar8 = &DAT_1419df7b0;
LAB_1403360ae:
    local_148 = *puVar8;
    uStack_140 = *(undefined4 *)(puVar8 + 1);
    uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
  }
  else {
    puVar8 = (undefined8 *)*local_40;
    if (puVar8 != &local_118) goto LAB_1403360ae;
  }
  local_90 = &local_118;
  uVar11 = CONCAT44(uVar4,DAT_141a014a8);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_158,1,uVar11,&local_90);
  uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_a8 = 0xb;
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    local_138 = 0;
    local_130 = 0;
    local_12c = 5;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    local_a0 = 0;
    local_98 = 0;
    local_94 = 5;
    if ((int)local_48[0] < 1) {
      puVar8 = &DAT_1419df7b0;
LAB_14033619a:
      local_148 = *puVar8;
      uStack_140 = *(undefined4 *)(puVar8 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_148);
    }
    else {
      puVar8 = (undefined8 *)*local_40;
      if (puVar8 != &local_108) goto LAB_14033619a;
    }
    local_88 = &local_108;
    local_148 = CONCAT44(uRam0000000141dd070c,_DAT_141dd0708);
    uStack_140 = uRam0000000141dd0710;
    uStack_13c = DAT_141dd0714;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_148);
    local_80 = local_f8;
    puVar8 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_a0,1,CONCAT44(uVar4,DAT_1419fdc58),ppuVar13);
    if (puVar8 != &local_e8) {
      local_148 = *puVar8;
      uStack_140 = *(undefined4 *)(puVar8 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      FUN_140041b80(&local_e8,&local_148);
    }
    local_78 = &local_e8;
    local_148 = CONCAT44(uRam0000000141dd073c,_DAT_141dd0738);
    uStack_140 = uRam0000000141dd0740;
    uStack_13c = DAT_141dd0744;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_148);
    local_70 = local_d8;
    FUN_14008e020(param_1,param_2,&local_138,3,&local_80);
  }
  local_a8 = 0x11;
  if ((int)local_48[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_40;
  }
  uStack_13c = 0;
  local_148 = 0x3ff0000000000000;
  uVar3 = FUN_140e851f0(puVar8,&local_148,DAT_141955260,1);
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if (uVar3 < 0x80000000) {
    local_a8 = 0x11;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = 0;
    local_150 = 0;
    local_14c = 5;
    local_148 = CONCAT44(uRam0000000141dd06ec,_DAT_141dd06e8);
    uStack_140 = uRam0000000141dd06f0;
    uStack_13c = DAT_141dd06f4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_148);
    local_90 = &local_118;
    if ((int)local_48[0] < 1) {
      puVar8 = &DAT_1419df7b0;
LAB_1403363d2:
      local_148 = *puVar8;
      uStack_140 = *(undefined4 *)(puVar8 + 1);
      uStack_13c = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_148);
    }
    else {
      puVar8 = (undefined8 *)*local_40;
      if (puVar8 != &local_108) goto LAB_1403363d2;
    }
    local_88 = &local_108;
    local_148 = CONCAT44(uRam0000000141dd072c,_DAT_141dd0728);
    uStack_140 = uRam0000000141dd0730;
    uStack_13c = DAT_141dd0734;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_148);
    local_80 = local_f8;
    local_148 = CONCAT44(uRam00000001419e40e4,_DAT_1419e40e0);
    uStack_140 = uRam00000001419e40e8;
    uStack_13c = uRam00000001419e40ec;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    FUN_140041b80(&local_e8,&local_148);
    local_78 = &local_e8;
    local_148 = CONCAT44(uRam0000000141dd071c,_DAT_141dd0718);
    uStack_140 = uRam0000000141dd0720;
    uStack_13c = DAT_141dd0724;
    if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_d8);
    }
    FUN_140041b80(local_d8,&local_148);
    local_70 = local_d8;
    FUN_14008e020(param_1,param_2,&local_158,5,&local_90);
  }
  if ((int)local_48[0] < 1) {
    puVar8 = &DAT_1419df7b0;
  }
  else {
    puVar8 = (undefined8 *)*local_40;
  }
  uStack_13c = 0;
  local_148 = 0;
  iVar2 = FUN_140e851f0(puVar8,&local_148,DAT_141955260,1);
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
    local_c8 = _DAT_141dd06e8;
    uStack_c4 = uRam0000000141dd06ec;
    uStack_c0 = uRam0000000141dd06f0;
    uStack_bc = DAT_141dd06f4;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_c8);
    local_90 = &local_118;
    if ((int)local_48[0] < 1) {
      puVar8 = &DAT_1419df7b0;
LAB_1403365c5:
      local_c8 = *(undefined4 *)puVar8;
      uStack_c4 = *(undefined4 *)((longlong)puVar8 + 4);
      uStack_c0 = *(undefined4 *)(puVar8 + 1);
      uStack_bc = *(undefined4 *)((longlong)puVar8 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_c8);
    }
    else {
      puVar8 = (undefined8 *)*local_40;
      if (puVar8 != &local_108) goto LAB_1403365c5;
    }
    local_88 = &local_108;
    local_c8 = _DAT_141dd06f8;
    uStack_c4 = uRam0000000141dd06fc;
    uStack_c0 = uRam0000000141dd0700;
    uStack_bc = DAT_141dd0704;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_c8);
    local_80 = local_f8;
    FUN_14008e020(param_1,param_2,&local_158,3,&local_90);
  }
  local_a8 = 0xb;
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
  puVar8 = (undefined8 *)(**(code **)(*DAT_141dde330 + 8))(DAT_141dde330,DAT_1419febe8);
  if ((int)local_48[0] < 1) {
    puVar7 = &DAT_1419df7b0;
LAB_1403366e7:
    local_c8 = *(undefined4 *)puVar7;
    uStack_c4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_c0 = *(undefined4 *)(puVar7 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_c8);
  }
  else {
    puVar7 = (undefined8 *)*local_40;
    if (puVar7 != &local_118) goto LAB_1403366e7;
  }
  local_90 = &local_118;
  if (puVar8 != &local_108) {
    local_c8 = *(undefined4 *)puVar8;
    uStack_c4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_c0 = *(undefined4 *)(puVar8 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_c8);
  }
  local_88 = &local_108;
  ppuVar12 = &local_90;
  puVar6 = (undefined4 *)gml_Script_InputPlayerGetGamepadType(param_1,param_2,&local_138,1,ppuVar12)
  ;
  uVar4 = (undefined4)((ulonglong)ppuVar12 >> 0x20);
  if (puVar6 != local_f8) {
    local_c8 = *puVar6;
    uStack_c4 = puVar6[1];
    uStack_c0 = puVar6[2];
    uStack_bc = puVar6[3];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_c8);
  }
  local_80 = local_f8;
  uVar10 = CONCAT44(uVar4,DAT_1419ff4f8);
  puVar8 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,2,uVar10,ppuVar13);
  if (puVar8 != &local_128) {
    local_c8 = *(undefined4 *)puVar8;
    uStack_c4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_c0 = *(undefined4 *)(puVar8 + 1);
    uStack_bc = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_c8);
  }
  local_a8 = 0xc;
  iVar2 = FUN_140e851f0(&local_128,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 == 0) {
    local_a8 = 0xc;
    goto LAB_140336920;
  }
  local_a8 = 0xe;
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = 0;
  local_150 = 0;
  local_14c = 5;
  FUN_140e87440(&local_128,DAT_141a01c48,0x80000000,&local_58,uVar10 & 0xffffffffffffff00,
                (ulonglong)ppuVar13 & 0xffffffffffffff00);
  switch(local_11c) {
  default:
switchD_1403368c8_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_128;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_128 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1403368c8_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar4 = FUN_140e4a8b0(&local_128);
    uVar5 = FUN_140e87250(uVar4);
  }
  FUN_140e63610(uVar5,param_2,&local_158,0,&local_58,0);
LAB_140336920:
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,5,FUN_140041b30);
  if (0 < (int)local_48[0]) {
    puVar8 = local_40;
    do {
      puVar7 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      *puVar7 = 0;
      *(undefined4 *)(puVar7 + 1) = 0;
      *(undefined4 *)((longlong)puVar7 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_40);
  DAT_141dc7a50 = (undefined8 *)local_b8;
  return param_3;
}

