// gml_Script__taper_draw_wispy_line_connected_draw_wispy_line @ 0x14027f4b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script__taper_draw_wispy_line_connected_draw_wispy_line
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
  ulonglong in_stack_fffffffffffffd90;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  undefined4 uStack_254;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 local_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 local_20c;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined4 local_1ec;
  undefined8 local_1e8;
  char *local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined4 local_138 [3];
  byte local_12c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined4 local_f8 [3];
  byte local_ec;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined8 *local_d8;
  undefined4 *local_d0;
  undefined8 *local_c8;
  undefined1 *local_c0;
  undefined8 *local_b8;
  undefined4 *local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
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
  
  local_1e0 = "gml_Script_draw_text_scribble";
  local_1e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1e8;
  local_1d8 = 0x12;
  FUN_140041df0(local_38,param_4,4,param_5);
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_168,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  uStack_3c = 0xffffff;
  local_48 = 0;
  local_1ec = 0xffffff;
  local_1f8 = 0;
  local_4c = 0xffffff;
  local_58 = 0;
  local_1fc = 0xffffff;
  local_208 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  local_20c = 0xffffff;
  local_218 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_22c = 0xffffff;
  local_238 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_25c = 0;
  local_268 = 0;
  local_23c = 0;
  local_248 = 0;
  local_174 = 0;
  local_180 = 0;
  local_184 = 0;
  local_190 = 0;
  local_194 = 0;
  local_1a0 = 0;
  local_1a4 = 0;
  local_1b0 = 0;
  local_1b4 = 0;
  local_1c0 = 0;
  local_1c4 = 0;
  local_1d0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dddd60) &&
     (_Init_thread_header(&DAT_141dddd60), DAT_141dddd60 == -1)) {
    DAT_141dddd68 = (longlong *)FUN_140e63aa0(DAT_141a57970);
    _Init_thread_footer(&DAT_141dddd60);
  }
  local_1d8 = 0x12;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_38[0];
  if ((int)local_38[0] < 4) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)local_30[3];
  }
  iVar2 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (((iVar2 == 0) && (local_1d8 = 0x12, 3 < (int)local_38[0])) &&
     (puVar4 = (undefined8 *)local_30[3], puVar4 != &DAT_1419df7b0)) {
    local_258 = (undefined4)DAT_1419df7b0;
    uStack_254 = DAT_1419df7b0._4_4_;
    uStack_250 = DAT_1419df7b8;
    uStack_24c = DAT_1419df7bc;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_258);
  }
  if (DAT_141ddc0a9 == '\0') {
    FUN_140e64380(DAT_141dddd68,"gml_Script_draw_text_scribble");
    FUN_140e64380(param_1,"gml_Script_draw_text_scribble");
  }
  local_1d8 = 0x14;
  if (DAT_141ddc0a9 == '\0') {
    DAT_141ddc0a9 = '\x01';
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dddd68 + 0x10))(DAT_141dddd68,DAT_141a04cd8);
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_258 = (undefined4)DAT_1419df7b0;
    uStack_254 = DAT_1419df7b0._4_4_;
    uStack_250 = DAT_1419df7b8;
    uStack_24c = DAT_1419df7bc;
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_258);
    local_e8 = &local_168;
    ppuVar10 = &local_e8;
    uVar5 = gml_Script___scribble_texture_get_material(param_1,param_2,&local_268,1,ppuVar10);
    uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
    FUN_140e87440(uVar5,DAT_141a05158,0x80000000,&local_a8,uVar11,
                  in_stack_fffffffffffffd90 & 0xffffffffffffff00);
    uVar3 = (undefined4)(uVar11 >> 0x20);
    FUN_140e609c0(DAT_141dddd68);
    if (&local_a8 != puVar4) {
      local_258 = (undefined4)local_a8;
      uStack_254 = local_a8._4_4_;
      uStack_250 = uStack_a0;
      uStack_24c = uStack_9c;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_258);
    }
    FUN_140e60910(1);
  }
  local_1d8 = 0x16;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  uVar5 = CONCAT44(uVar3,DAT_141a04ae8);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_268,0,uVar5,0);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_228) {
    local_258 = *(undefined4 *)puVar4;
    uStack_254 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_250 = *(undefined4 *)(puVar4 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_258);
  }
  local_1d8 = 0x17;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  local_e8 = &local_228;
  ppuVar10 = &local_e8;
  uVar11 = CONCAT44(uVar3,DAT_141a08638);
  uVar5 = FUN_140e634e0(param_1,param_2,&local_268,1,uVar11,ppuVar10);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_1d8 = 0x1e;
    uVar5 = (**(code **)(*DAT_141dddd68 + 8))(DAT_141dddd68,DAT_141a04cd8);
    ppuVar10 = (undefined8 **)((ulonglong)ppuVar10 & 0xffffffffffffff00);
    FUN_140e87440(uVar5,DAT_141a04d28,0x80000000,&local_48,uVar11 & 0xffffffffffffff00,ppuVar10);
    local_258 = (undefined4)local_48;
    uStack_254 = local_48._4_4_;
    uStack_250 = uStack_40;
    uStack_24c = uStack_3c;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_258);
  }
  else {
    local_1d8 = 0x19;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_e0 = &local_228;
    ppuVar10 = &local_e0;
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_248,1,DAT_141a08608,ppuVar10);
    if (puVar4 != &local_228) {
      local_258 = *(undefined4 *)puVar4;
      uStack_254 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_250 = *(undefined4 *)(puVar4 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_258);
    }
    local_1d8 = 0x1a;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_e8 = &local_228;
    uVar5 = gml_Script_scribble_font_force_bilinear_filtering
                      (param_1,param_2,&local_268,1,&local_e8);
    cVar1 = FUN_140e491e0(uVar5);
    if (cVar1 == '\0') {
      local_1d8 = 0x1a;
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      local_258 = _DAT_141dce578;
      uStack_254 = uRam0000000141dce57c;
      uStack_250 = uRam0000000141dce580;
      uStack_24c = DAT_141dce584;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_258);
      local_e0 = &local_158;
      local_d8 = &local_228;
      local_258 = _DAT_141dce598;
      uStack_254 = uRam0000000141dce59c;
      uStack_250 = uRam0000000141dce5a0;
      uStack_24c = DAT_141dce5a4;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_258);
      local_d0 = local_138;
      FUN_1401ef7f0(param_1,param_2,&local_248,3,&local_e0);
    }
  }
  local_1d8 = 0x21;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  local_180 = 0;
  local_178 = 0;
  local_174 = 5;
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  local_190 = 0;
  local_188 = 0;
  local_184 = 5;
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  local_1a0 = 0;
  local_198 = 0;
  local_194 = 5;
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
  if ((int)local_38[0] < 3) {
    puVar4 = &DAT_1419df7b0;
LAB_14027fd88:
    local_258 = *(undefined4 *)puVar4;
    uStack_254 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_250 = *(undefined4 *)(puVar4 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_258);
  }
  else {
    puVar4 = (undefined8 *)local_30[2];
    if (puVar4 != &local_168) goto LAB_14027fd88;
  }
  local_e8 = &local_168;
  local_258 = _DAT_141dce588;
  uStack_254 = uRam0000000141dce58c;
  uStack_250 = uRam0000000141dce590;
  uStack_24c = DAT_141dce594;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_140041b80(&local_158,&local_258);
  local_e0 = &local_158;
  ppuVar12 = &local_e8;
  puVar4 = (undefined8 *)gml_Script_seg_add(param_1,param_2,&local_268,2,ppuVar12);
  if (puVar4 != &local_1f8) {
    local_258 = *(undefined4 *)puVar4;
    uStack_254 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_250 = *(undefined4 *)(puVar4 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_258);
  }
  uVar11 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
  FUN_140e87440(&local_1f8,DAT_141a055b8,0x80000000,&local_58,uVar11,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar5 = CONCAT44((int)(uVar11 >> 0x20),DAT_141a04978);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_180,0,uVar5,0);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_148) {
    local_258 = *(undefined4 *)puVar4;
    uStack_254 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_250 = *(undefined4 *)(puVar4 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_258);
  }
  local_d8 = &local_148;
  puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_190,0,CONCAT44(uVar3,DAT_141a049c8),0)
  ;
  if (puVar6 != local_138) {
    local_258 = *puVar6;
    uStack_254 = puVar6[1];
    uStack_250 = puVar6[2];
    uStack_24c = puVar6[3];
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_258);
  }
  local_d0 = local_138;
  switch(local_1ec) {
  default:
switchD_14027ff64_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_1f8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_1f8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_14027ff64_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_1f8);
    uVar5 = FUN_140e87250(uVar3);
  }
  ppuVar10 = &local_d8;
  puVar4 = &local_58;
  puVar7 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_248,2,puVar4,ppuVar10);
  if (puVar7 != &local_208) {
    local_258 = *(undefined4 *)puVar7;
    uStack_254 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_250 = *(undefined4 *)(puVar7 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_208);
    }
    FUN_140041b80(&local_208,&local_258);
  }
  FUN_140e87440(&local_208,DAT_141a05db8,0x80000000,&local_68,(ulonglong)puVar4 & 0xffffffffffffff00
                ,(ulonglong)ppuVar10 & 0xffffffffffffff00);
  local_c8 = &local_228;
  local_258 = _DAT_1419e39d0;
  uStack_254 = uRam00000001419e39d4;
  uStack_250 = uRam00000001419e39d8;
  uStack_24c = uRam00000001419e39dc;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_258);
  local_c0 = local_118;
  switch(local_1fc) {
  default:
switchD_140280092_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_208;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_208 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140280092_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_208);
    uVar5 = FUN_140e87250(uVar3);
  }
  ppuVar10 = &local_c8;
  puVar4 = &local_68;
  puVar7 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_1a0,2,puVar4,ppuVar10);
  if (puVar7 != &local_218) {
    local_258 = *(undefined4 *)puVar7;
    uStack_254 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_250 = *(undefined4 *)(puVar7 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    FUN_140041b80(&local_218,&local_258);
  }
  uVar11 = (ulonglong)puVar4 & 0xffffffffffffff00;
  FUN_140e87440(&local_218,DAT_141a05688,0x80000000,&local_78,uVar11,
                (ulonglong)ppuVar10 & 0xffffffffffffff00);
  uVar5 = CONCAT44((int)(uVar11 >> 0x20),DAT_141a57800);
  puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1c0,0,uVar5,0);
  uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (puVar4 != &local_108) {
    local_258 = *(undefined4 *)puVar4;
    uStack_254 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_250 = *(undefined4 *)(puVar4 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_258);
  }
  local_b8 = &local_108;
  puVar6 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_1d0,0,CONCAT44(uVar3,DAT_1419fe828),0)
  ;
  if (puVar6 != local_f8) {
    local_258 = *puVar6;
    uStack_254 = puVar6[1];
    uStack_250 = puVar6[2];
    uStack_24c = puVar6[3];
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_258);
  }
  local_b0 = local_f8;
  switch(local_20c) {
  default:
switchD_140280250_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_218;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_218 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140280250_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_218);
    uVar5 = FUN_140e87250(uVar3);
  }
  ppuVar10 = &local_b8;
  puVar4 = &local_78;
  puVar7 = (undefined8 *)FUN_140e63610(uVar5,param_2,&local_1b0,2,puVar4,ppuVar10);
  if (puVar7 != &local_238) {
    local_258 = *(undefined4 *)puVar7;
    uStack_254 = *(undefined4 *)((longlong)puVar7 + 4);
    uStack_250 = *(undefined4 *)(puVar7 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_258);
  }
  local_1d8 = 0x25;
  if ((int)local_38[0] < 4) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)local_30[3];
  }
  iVar2 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar2 != 0) {
    local_1d8 = 0x25;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    FUN_140e87440(&local_238,DAT_141a05a18,0x80000000,&local_88,
                  (ulonglong)puVar4 & 0xffffffffffffff00,(ulonglong)ppuVar10 & 0xffffffffffffff00);
    if ((int)local_38[0] < 4) {
      puVar4 = &DAT_1419df7b0;
LAB_140280391:
      local_258 = *(undefined4 *)puVar4;
      uStack_254 = *(undefined4 *)((longlong)puVar4 + 4);
      uStack_250 = *(undefined4 *)(puVar4 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_258);
    }
    else {
      puVar4 = (undefined8 *)local_30[3];
      if (puVar4 != &local_168) goto LAB_140280391;
    }
    local_e8 = &local_168;
    switch(local_22c) {
    default:
switchD_1402803df_caseD_1:
      uVar5 = 0;
      break;
    case 6:
      uVar5 = local_238;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_238 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1402803df_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_238);
      uVar5 = FUN_140e87250(uVar3);
    }
    ppuVar10 = &local_e8;
    puVar4 = &local_88;
    FUN_140e63610(uVar5,param_2,&local_268,1,puVar4,ppuVar10);
  }
  local_1d8 = 0x26;
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  local_268 = 0;
  local_260 = 0;
  local_25c = 5;
  FUN_140e87440(&local_238,DAT_141a05028,0x80000000,&local_98,(ulonglong)puVar4 & 0xffffffffffffff00
                ,(ulonglong)ppuVar10 & 0xffffffffffffff00);
  if ((int)local_38[0] < 1) {
    puVar4 = &DAT_1419df7b0;
LAB_1402804b3:
    local_258 = *(undefined4 *)puVar4;
    uStack_254 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_250 = *(undefined4 *)(puVar4 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_258);
  }
  else {
    puVar4 = (undefined8 *)*local_30;
    if (puVar4 != &local_168) goto LAB_1402804b3;
  }
  local_e8 = &local_168;
  if (((int)local_38[0] < 2) || (puVar8 = (undefined8 *)local_30[1], puVar8 != &local_158)) {
    local_258 = *(undefined4 *)puVar8;
    uStack_254 = *(undefined4 *)((longlong)puVar8 + 4);
    uStack_250 = *(undefined4 *)(puVar8 + 1);
    uStack_24c = *(undefined4 *)((longlong)puVar8 + 0xc);
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_258);
  }
  local_e0 = &local_158;
  switch(local_22c) {
  default:
switchD_140280550_caseD_1:
    uVar5 = 0;
    break;
  case 6:
    uVar5 = local_238;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_238 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140280550_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_238);
    uVar5 = FUN_140e87250(uVar3);
  }
  FUN_140e63610(uVar5,param_2,&local_268,2,&local_98,&local_e8);
  if ((1 << ((byte)local_1c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d0);
  }
  if ((1 << ((byte)local_1b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c0);
  }
  if ((1 << ((byte)local_1a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b0);
  }
  if ((1 << ((byte)local_194 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a0);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_174 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_180);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,8,FUN_140041b30);
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
  DAT_141dc7a50 = (undefined8 *)local_1e8;
  return param_3;
}

