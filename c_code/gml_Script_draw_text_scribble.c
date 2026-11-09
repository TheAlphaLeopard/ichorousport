// gml_Script_draw_text_scribble @ 0x14027dc50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_draw_text_scribble
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined8 **ppuVar12;
  ulonglong in_stack_fffffffffffffd40;
  undefined4 **ppuVar13;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_27c;
  undefined8 local_278;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  char *local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_198;
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined4 local_168 [3];
  byte local_15c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined4 local_138 [3];
  byte local_12c;
  undefined4 local_128 [3];
  byte local_11c;
  undefined8 local_118;
  byte local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined8 *local_e8;
  undefined4 *local_e0;
  undefined8 *local_d8;
  undefined1 *local_d0;
  undefined4 *local_c8;
  undefined4 *local_c0;
  undefined8 *local_b8 [2];
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  uint local_38 [2];
  undefined8 *local_30;
  
  local_220 = "gml_Script_draw_text_scribble_ext";
  local_228 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_228;
  local_218 = 0x13;
  FUN_140041df0(local_38,param_4,5,param_5);
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_198,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_23c = 0xffffff;
  local_248 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_24c = 0xffffff;
  local_258 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_29c = 0;
  local_2a8 = 0;
  local_28c = 0;
  local_298 = 0;
  local_1a4 = 0;
  local_1b0 = 0;
  local_1b4 = 0;
  local_1c0 = 0;
  local_1c4 = 0;
  local_1d0 = 0;
  local_1d4 = 0;
  local_1e0 = 0;
  local_1e4 = 0;
  local_1f0 = 0;
  local_1f4 = 0;
  local_200 = 0;
  local_204 = 0;
  local_210 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddd50) &&
     (_Init_thread_header(&DAT_141dddd50), DAT_141dddd50 == -1)) {
    DAT_141dddd58 = (longlong *)FUN_140e63aa0(DAT_141a57950);
    _Init_thread_footer(&DAT_141dddd50);
  }
  local_218 = 0x13;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 5) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_30[4];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (local_218 = 0x13, 4 < (int)local_38[0])) &&
     (puVar4 = (undefined8 *)local_30[4], puVar4 != &DAT_1419df7b0)) {
    local_2b8 = (undefined4)DAT_1419df7b0;
    uStack_2b4 = DAT_1419df7b0._4_4_;
    uStack_2b0 = DAT_1419df7b8;
    uStack_2ac = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_2b8);
  }
  if (DAT_141ddc0a8 == '\0') {
    FUN_140e64380(DAT_141dddd58,"gml_Script_draw_text_scribble_ext");
    FUN_140e64380(param_1,"gml_Script_draw_text_scribble_ext");
  }
  local_218 = 0x15;
  if (DAT_141ddc0a8 == '\0') {
    DAT_141ddc0a8 = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dddd58 + 0x10))(DAT_141dddd58,DAT_141a04cd8);
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    local_2b8 = (undefined4)DAT_1419df7b0;
    uStack_2b4 = DAT_1419df7b0._4_4_;
    uStack_2b0 = DAT_1419df7b8;
    uStack_2ac = DAT_1419df7bc;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_2b8);
    local_f8 = &local_198;
    ppuVar10 = &local_f8;
    uVar5 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_2a8,1,ppuVar10);
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a05158,0x80000000,&local_108,uVar11,
                  in_stack_fffffffffffffd40 & 0xffffffffffffff00);
    uVar3 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dddd58);
    if (&local_108 != puVar4) {
      local_2b8 = (undefined4)local_108;
      uStack_2b4 = local_108._4_4_;
      uStack_2b0 = uStack_100;
      uStack_2ac = uStack_fc;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_2b8);
    }
    FUN_140e60910(1);
  }
  local_218 = 0x17;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  uVar5 = CONCAT44(uVar3,DAT_141a04ae8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_2a8,0,uVar5,0);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_278) {
    local_2b8 = *(undefined4 *)puVar4;
    uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_2b0 = *(undefined4 *)(puVar4 + 1);
    uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_2b8);
  }
  local_218 = 0x18;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  local_f8 = &local_278;
  ppuVar10 = &local_f8;
  uVar11 = CONCAT44(uVar3,DAT_141a08638);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_2a8,1,uVar11,ppuVar10);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_218 = 0x1f;
    uVar5 = (**(code **)(*DAT_141dddd58 + 8))(DAT_141dddd58,DAT_141a04cd8);
    ppuVar10 = (undefined8 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
    FUN_140e87440(uVar5,DAT_141a04d28,0x80000000,&local_48,uVar11 & 0xffffffffffffff00,ppuVar10);
    local_2b8 = (undefined4)local_48;
    uStack_2b4 = local_48._4_4_;
    uStack_2b0 = uStack_40;
    uStack_2ac = uStack_3c;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_2b8);
  }
  else {
    local_218 = 0x1a;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    local_f0 = &local_278;
    ppuVar10 = &local_f0;
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_298,1,DAT_141a08608,ppuVar10);
    if (puVar4 != &local_278) {
      local_2b8 = *(undefined4 *)puVar4;
      uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_2b0 = *(undefined4 *)(puVar4 + 1);
      uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_2b8);
    }
    local_218 = 0x1b;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    local_f8 = &local_278;
    uVar5 = gml_Script_scribble_font_force_bilinear_filtering
                      (param_1,param_2,&local_2a8,1,&local_f8);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_218 = 0x1b;
      if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_298 = 0;
      local_290 = 0;
      local_28c = 5;
      local_2b8 = _DAT_141dce568;
      uStack_2b4 = uRam0000000141dce56c;
      uStack_2b0 = uRam0000000141dce570;
      uStack_2ac = DAT_141dce574;
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_2b8);
      local_f0 = &local_188;
      local_e8 = &local_278;
      local_2b8 = _DAT_141dce548;
      uStack_2b4 = uRam0000000141dce54c;
      uStack_2b0 = uRam0000000141dce550;
      uStack_2ac = DAT_141dce554;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_168);
      }
      FUN_140041b80(local_168,&local_2b8);
      local_e0 = local_168;
      FUN_1401ef7f0(param_1,param_2,&local_298,3,&local_f0);
    }
  }
  local_218 = 0x22;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  local_1b0 = 0;
  local_1a8 = 0;
  local_1a4 = 5;
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  local_1c0 = 0;
  local_1b8 = 0;
  local_1b4 = 5;
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  local_1d0 = 0;
  local_1c8 = 0;
  local_1c4 = 5;
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  local_1e0 = 0;
  local_1d8 = 0;
  local_1d4 = 5;
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  local_1f0 = 0;
  local_1e8 = 0;
  local_1e4 = 5;
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  local_200 = 0;
  local_1f8 = 0;
  local_1f4 = 5;
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  local_210 = 0;
  local_208 = 0;
  local_204 = 5;
  if ((int)local_38[0] < 3) {
    puVar4 = &DAT_1419df7b0;
LAB_14027e580:
    local_2b8 = *(undefined4 *)puVar4;
    uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_2b0 = *(undefined4 *)(puVar4 + 1);
    uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_2b8);
  }
  else {
    puVar4 = (undefined8 *)local_30[2];
    if (puVar4 != &local_198) goto LAB_14027e580;
  }
  local_f8 = &local_198;
  local_2b8 = _DAT_141dce558;
  uStack_2b4 = uRam0000000141dce55c;
  uStack_2b0 = uRam0000000141dce560;
  uStack_2ac = DAT_141dce564;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  FUN_140041b80(&local_188,&local_2b8);
  local_f0 = &local_188;
  ppuVar12 = &local_f8;
  puVar4 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_2a8,2,ppuVar12);
  if (puVar4 != &local_238) {
    local_2b8 = *(undefined4 *)puVar4;
    uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_2b0 = *(undefined4 *)(puVar4 + 1);
    uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2b8);
  }
  uVar11 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_238,DAT_141a055b8,0x80000000,&local_58,uVar11,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar5 = CONCAT44((int)(uVar11 >> 0x20),DAT_141a04978);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b0,0,uVar5,0);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_178) {
    local_2b8 = *(undefined4 *)puVar4;
    uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_2b0 = *(undefined4 *)(puVar4 + 1);
    uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_2b8);
  }
  local_e8 = &local_178;
  puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1c0,0,CONCAT44(uVar3,DAT_141a049c8),0)
  ;
  if (puVar6 != local_168) {
    local_2b8 = *puVar6;
    uStack_2b4 = puVar6[1];
    uStack_2b0 = puVar6[2];
    uStack_2ac = puVar6[3];
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_2b8);
  }
  local_e0 = local_168;
  switch(local_22c) {
  default:
switchD_14027e76b_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_238;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_238 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14027e76b_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_238);
    uVar5 = FUN_140e87250(uVar3);
  }
  ppuVar10 = &local_e8;
  puVar4 = &local_58;
  puVar7 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_298,2,puVar4,ppuVar10);
  if (puVar7 != &local_248) {
    local_2b8 = *(undefined4 *)puVar7;
    uStack_2b4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_2b0 = *(undefined4 *)(puVar7 + 1);
    uStack_2ac = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
  }
  FUN_140e87440(&local_248,DAT_141a05db8,0x80000000,&local_68,(ulonglong)puVar4 & 0xffffffffffffff00
                ,(ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_d8 = &local_278;
  local_2b8 = _DAT_1419e39c0;
  uStack_2b4 = uRam00000001419e39c4;
  uStack_2b0 = uRam00000001419e39c8;
  uStack_2ac = uRam00000001419e39cc;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_2b8);
  local_d0 = local_148;
  switch(local_23c) {
  default:
switchD_14027e899_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_248;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_248 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14027e899_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_248);
    uVar5 = FUN_140e87250(uVar3);
  }
  ppuVar10 = &local_d8;
  puVar4 = &local_68;
  puVar7 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_1d0,2,puVar4,ppuVar10);
  if (puVar7 != &local_258) {
    local_2b8 = *(undefined4 *)puVar7;
    uStack_2b4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_2b0 = *(undefined4 *)(puVar7 + 1);
    uStack_2ac = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    FUN_140041b80(&local_258,&local_2b8);
  }
  uVar11 = (ulonglong)puVar4 & 0xffffffffffffff00;
  FUN_140e87440(&local_258,DAT_141a05688,0x80000000,&local_78,uVar11,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar5 = CONCAT44((int)(uVar11 >> 0x20),DAT_141a57800);
  puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1f0,0,uVar5,0);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar6 != local_138) {
    local_2b8 = *puVar6;
    uStack_2b4 = puVar6[1];
    uStack_2b0 = puVar6[2];
    uStack_2ac = puVar6[3];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_2b8);
  }
  local_c8 = local_138;
  puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_200,0,CONCAT44(uVar3,DAT_1419fe828),0)
  ;
  if (puVar6 != local_128) {
    local_2b8 = *puVar6;
    uStack_2b4 = puVar6[1];
    uStack_2b0 = puVar6[2];
    uStack_2ac = puVar6[3];
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_2b8);
  }
  local_c0 = local_128;
  switch(local_24c) {
  default:
switchD_14027ea57_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_258;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_258 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14027ea57_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_258);
    uVar5 = FUN_140e87250(uVar3);
  }
  ppuVar13 = &local_c8;
  puVar4 = &local_78;
  puVar7 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_1e0,2,puVar4,ppuVar13);
  if (puVar7 != &local_268) {
    local_2b8 = *(undefined4 *)puVar7;
    uStack_2b4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_2b0 = *(undefined4 *)(puVar7 + 1);
    uStack_2ac = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    FUN_140041b80(&local_268,&local_2b8);
  }
  FUN_140e87440(&local_268,DAT_141a05c08,0x80000000,&local_88,(ulonglong)puVar4 & 0xffffffffffffff00
                ,(ulonglong)ppuVar13 & 0xffffffffffffff00);
  if ((int)local_38[0] < 4) {
    puVar4 = &DAT_1419df7b0;
LAB_14027eb30:
    local_2b8 = *(undefined4 *)puVar4;
    uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_2b0 = *(undefined4 *)(puVar4 + 1);
    uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_2b8);
  }
  else {
    puVar4 = (undefined8 *)local_30[3];
    if (puVar4 != &local_118) goto LAB_14027eb30;
  }
  local_b8[0] = &local_118;
  switch(local_25c) {
  default:
switchD_14027eb89_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_268;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_268 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14027eb89_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_268);
    uVar5 = FUN_140e87250(uVar3);
  }
  ppuVar10 = local_b8;
  puVar4 = &local_88;
  puVar7 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_210,1,puVar4,ppuVar10);
  if (puVar7 != &local_288) {
    local_2b8 = *(undefined4 *)puVar7;
    uStack_2b4 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_2b0 = *(undefined4 *)(puVar7 + 1);
    uStack_2ac = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_2b8);
  }
  local_218 = 0x27;
  if ((int)local_38[0] < 5) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_30[4];
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    local_218 = 0x27;
    if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    local_2a8 = 0;
    local_2a0 = 0;
    local_29c = 5;
    FUN_140e87440(&local_288,DAT_141a05a18,0x80000000,&local_98,
                  (ulonglong)puVar4 & 0xffffffffffffff00,(ulonglong)ppuVar10 & 0xffffffffffffff00);
    if ((int)local_38[0] < 5) {
      puVar4 = &DAT_1419df7b0;
LAB_14027ecca:
      local_2b8 = *(undefined4 *)puVar4;
      uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_2b0 = *(undefined4 *)(puVar4 + 1);
      uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_2b8);
    }
    else {
      puVar4 = (undefined8 *)local_30[4];
      if (puVar4 != &local_198) goto LAB_14027ecca;
    }
    local_f8 = &local_198;
    switch(local_27c) {
    default:
switchD_14027ed18_caseD_1:
      uVar5 = 0;
      break;
    case 6:
      uVar5 = local_288;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_288 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14027ed18_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_288);
      uVar5 = FUN_140e87250(uVar3);
    }
    ppuVar10 = &local_f8;
    puVar4 = &local_98;
    FUN_140e63610(uVar5,param_2,&local_2a8,1,puVar4,ppuVar10);
  }
  local_218 = 0x28;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  FUN_140e87440(&local_288,DAT_141a05028,0x80000000,&local_a8,(ulonglong)puVar4 & 0xffffffffffffff00
                ,(ulonglong)ppuVar10 & 0xffffffffffffff00);
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_14027edec:
    local_2b8 = *(undefined4 *)puVar4;
    uStack_2b4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_2b0 = *(undefined4 *)(puVar4 + 1);
    uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_2b8);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_198) goto LAB_14027edec;
  }
  local_f8 = &local_198;
  if (((int)local_38[0] < 2) || (puVar8 = (undefined8 *)local_30[1], puVar8 != &local_188)) {
    local_2b8 = *(undefined4 *)puVar8;
    uStack_2b4 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_2b0 = *(undefined4 *)(puVar8 + 1);
    uStack_2ac = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_2b8);
  }
  local_f0 = &local_188;
  switch(local_27c) {
  default:
switchD_14027ee89_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_288;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_288 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14027ee89_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_288);
    uVar5 = FUN_140e87250(uVar3);
  }
  FUN_140e63610(uVar5,param_2,&local_2a8,2,&local_a8,&local_f8);
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_1d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e0);
  }
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,9,FUN_140041b30);
  if (0 < (int)local_38[0]) {
    puVar8 = local_30;
    do {
      puVar4 = (undefined8 *)*puVar8;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      *puVar4 = 0;
      *(undefined4 *)(puVar4 + 1) = 0;
      *(undefined4 *)((longlong)puVar4 + 0xc) = 5;
      puVar8 = puVar8 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_30);
  DAT_141dc7a50 = (undefined8 *)local_228;
  return param_3;
}

