// gml_Object_oMainMenuPause_Create_0 @ 0x140b50370

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oMainMenuPause_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  double dVar9;
  double **ppdVar11;
  undefined8 in_stack_fffffffffffffcd0;
  undefined4 uVar12;
  double local_308;
  undefined8 uStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined4 local_2e0;
  undefined4 local_2dc;
  double local_2d8;
  undefined4 local_2d0;
  uint local_2cc;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  double local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  undefined1 local_258 [12];
  byte local_24c;
  undefined1 local_248 [12];
  byte local_23c;
  double local_238;
  byte local_22c;
  double local_228;
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  double local_1f8;
  byte local_1ec;
  double local_1e8;
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  double local_1b8;
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined1 local_158 [12];
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  double local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined1 *local_e8;
  undefined1 *local_e0;
  double *local_d8;
  double *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  double *local_b8;
  double *local_b0;
  undefined1 *local_a8;
  undefined1 *local_a0;
  double *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  
  uVar12 = (undefined4)((ulonglong)in_stack_fffffffffffffcd0 >> 0x20);
  local_270 = "gml_Object_oMainMenu_Draw_64";
  local_268 = 0;
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  uVar7 = 1;
  _eh_vector_constructor_iterator_(local_258,0x10,0x16,FUN_1400424d0,FUN_140041b30);
  uStack_ec = 0xffffff;
  local_f8 = 0.0;
  local_2dc = 0xffffff;
  local_2e8 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_27c = 0xffffff;
  local_288 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_268 = 4;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f40e8);
  pdVar4 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f40b8);
  FUN_140e609c0(param_1);
  uStack_2f0 = (double)(ulonglong)(uint)uStack_2f0;
  local_2f8 = 40.0;
  iVar2 = FUN_140e851f0(uVar3,&local_2f8,DAT_141955260,1);
  if ((1 << ((byte)((ulonglong)uStack_2f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(pdVar4);
  }
  *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
  *pdVar4 = (double)(byte)((0 < iVar2) * -0x10);
  FUN_140e60910(1);
  local_268 = 7;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a01bb8);
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f40b8);
  local_2cc = *(uint *)((longlong)pdVar4 + 0xc);
  local_2d0 = *(undefined4 *)(pdVar4 + 1);
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) == 0) {
    local_2d8 = *pdVar4;
  }
  else {
    FUN_1400419b0(&local_2d8,pdVar4);
  }
  FUN_1400460e0(&local_2d8,uVar3);
  uStack_2f0._4_4_ = 0xf;
  local_2f8 = 7.291128972913664e-304;
  if ((local_2cc & 0xffffff) == 0) {
    uVar8 = SUB84(local_2d8,0);
    uVar10 = (undefined4)((ulonglong)local_2d8 >> 0x20);
  }
  else {
    uVar6 = FUN_140e4b060(&local_2d8);
    uVar8 = (undefined4)uVar6;
    uVar10 = (undefined4)((ulonglong)uVar6 >> 0x20);
  }
  if ((uStack_2f0._4_4_ & 0xffffff) == 0) {
    dVar9 = local_2f8;
  }
  else {
    dVar9 = (double)FUN_140e4b060(&local_2f8);
  }
  FUN_140ec5dd0(param_1,(int)dVar9,0,0x43700000,
                CONCAT44(uVar7,(float)(double)CONCAT44(uVar10,uVar8)),CONCAT44(uVar12,0x3ecccccd),
                0x3ecccccd,0,0xffffff,0x3f800000);
  if ((1 << ((byte)uStack_2f0._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_268 = 9;
  thunk_FUN_141039d20(1);
  local_268 = 10;
  thunk_FUN_141039d50(1);
  local_268 = 0xc;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  local_308 = _DAT_141dd9a98;
  uStack_300 = (double)uRam0000000141dd9aa0;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_308);
  local_e8 = local_258;
  pdVar4 = (double *)gml_Script_anon_6431_INIT(param_1,param_2,&local_2e8,1,&local_e8);
  if ((*(uint *)((longlong)pdVar4 + 0xc) & 0xffffff) == 0) {
    dVar9 = *pdVar4;
  }
  else {
    dVar9 = (double)FUN_140e4b060(pdVar4);
  }
  thunk_FUN_141039cb0((int)dVar9);
  local_268 = 0xe;
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  local_2e8 = 0;
  local_2e0 = 0;
  local_2dc = 5;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  pdVar4 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_1419f4108);
  FUN_140e85f80(param_1,DAT_141a00d08,0,&local_f8);
  uStack_300 = (double)CONCAT44(uStack_ec,uStack_f0);
  local_308 = local_f8;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_308);
  local_308 = _DAT_141dd9a98;
  uStack_300 = (double)uRam0000000141dd9aa0;
  local_e8 = local_258;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_248);
  }
  FUN_140041b80(local_248,&local_308);
  local_e0 = local_248;
  local_308 = _DAT_1419ec1b0;
  uStack_300 = (double)uRam00000001419ec1b8;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_308);
  local_d8 = &local_238;
  local_308 = DAT_1419df7b0;
  uStack_300 = (double)_DAT_1419df7b8;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_308);
  local_d0 = &local_228;
  local_308 = DAT_1419df7b0;
  uStack_300 = (double)_DAT_1419df7b8;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_308);
  local_c8 = local_218;
  uStack_2f0 = (double)CONCAT44(DAT_141dd9ab4,DAT_141dd9ab0);
  if ((1 << ((byte)DAT_141dd9ab4 & 0x1f) & 0x46U) == 0) {
    local_2f8 = DAT_141dd9aa8;
    uVar7 = DAT_141dd9ab4;
  }
  else {
    FUN_1400419b0(&local_2f8,&DAT_141dd9aa8);
    uVar7 = uStack_2f0._4_4_;
  }
  local_308 = local_2f8;
  uStack_300 = uStack_2f0;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_308);
  if ((1 << ((byte)uVar7 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  local_c0 = local_208;
  pdVar5 = (double *)gml_Script____struct___117(param_1,param_2,&local_288,1,&local_e0);
  if (pdVar5 != &local_1f8) {
    local_308 = *pdVar5;
    uStack_300 = pdVar5[1];
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_308);
  }
  local_b8 = &local_1f8;
  ppdVar11 = &local_d8;
  pdVar5 = (double *)gml_Script_InputIconGetDirect(param_1,param_2,&local_298,3,ppdVar11);
  uVar7 = (undefined4)((ulonglong)ppdVar11 >> 0x20);
  if (pdVar5 != &local_1e8) {
    local_308 = *pdVar5;
    uStack_300 = pdVar5[1];
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_308);
  }
  local_b0 = &local_1e8;
  local_308 = _DAT_1419ec1c0;
  uStack_300 = (double)uRam00000001419ec1c8;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_308);
  local_a8 = local_1d8;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_2b8,1,CONCAT44(uVar7,DAT_141a00dd8),&local_e8);
  local_2cc = *(undefined4 *)((longlong)pdVar4 + 0xc);
  local_2d0 = *(undefined4 *)(pdVar4 + 1);
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) == 0) {
    local_2d8 = *pdVar4;
  }
  else {
    FUN_1400419b0(&local_2d8,pdVar4);
  }
  FUN_1400462a0(&local_2d8,uVar6);
  local_29c = local_2cc;
  local_2a0 = local_2d0;
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) == 0) {
    local_2a8 = local_2d8;
  }
  else {
    FUN_1400419b0(&local_2a8,&local_2d8);
  }
  uStack_300._4_4_ = 7;
  local_308 = (double)CONCAT44(local_308._4_4_,0x40);
  FUN_1400460e0(&local_2a8,&local_308);
  if ((1 << ((byte)uStack_300._4_4_ & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_308);
  }
  uStack_2f0 = (double)CONCAT44(local_29c,local_2a0);
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) == 0) {
    local_2f8 = local_2a8;
  }
  else {
    FUN_1400419b0(&local_2f8,&local_2a8);
  }
  FUN_1400460e0(&local_2f8,uVar3);
  local_308 = local_2f8;
  uStack_300 = uStack_2f0;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_308);
  if ((1 << ((byte)((ulonglong)uStack_2f0 >> 0x20) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f8);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_2cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d8);
  }
  local_a0 = local_1c8;
  pdVar4 = (double *)FUN_140e64420(param_1,param_2,&local_2c8,3,&local_c0);
  if (pdVar4 != &local_1b8) {
    local_308 = *pdVar4;
    uStack_300 = pdVar4[1];
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_308);
  }
  local_98 = &local_1b8;
  local_308 = DAT_1419df7b0;
  uStack_300 = (double)_DAT_1419df7b8;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_308);
  local_90 = local_1a8;
  local_308 = DAT_1419df7b0;
  uStack_300 = (double)_DAT_1419df7b8;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_308);
  local_88 = local_198;
  local_308 = _DAT_1419ec1d0;
  uStack_300 = (double)uRam00000001419ec1d8;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_308);
  local_80 = local_188;
  local_308 = _DAT_1419ec1d0;
  uStack_300 = (double)uRam00000001419ec1d8;
  if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_308);
  local_78 = local_178;
  local_308 = DAT_1419df7b0;
  uStack_300 = (double)_DAT_1419df7b8;
  if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_168);
  }
  FUN_140041b80(local_168,&local_308);
  local_70 = local_168;
  local_308 = DAT_1419df7b0;
  uStack_300 = (double)_DAT_1419df7b8;
  if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_158);
  }
  FUN_140041b80(local_158,&local_308);
  local_68 = local_158;
  local_308 = DAT_1419df7b0;
  uStack_300 = (double)_DAT_1419df7b8;
  if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_148);
  }
  FUN_140041b80(local_148,&local_308);
  local_60 = local_148;
  local_308 = DAT_1419df7b0;
  uStack_300 = (double)_DAT_1419df7b8;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_308);
  local_58 = local_138;
  local_308 = DAT_1419df7b0;
  uStack_300 = (double)_DAT_1419df7b8;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_308);
  local_50 = local_128;
  local_308 = DAT_1419df7b0;
  uStack_300 = (double)_DAT_1419df7b8;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_308);
  local_48 = local_118;
  local_308 = DAT_1419df7b0;
  uStack_300 = (double)_DAT_1419df7b8;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_308);
  local_40 = local_108;
  gml_Script_draw_sprite_hires(param_1,param_2,&local_2e8,0xe,&local_a8);
  local_268 = 0x10;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a575f0);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    local_268 = 0x11;
    if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e8);
    }
    local_2e8 = 0;
    local_2e0 = 0;
    local_2dc = 5;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    (**(code **)(*param_1 + 8))(param_1,DAT_1419f40b8);
    uStack_300 = (double)CONCAT44(0xf,(undefined4)uStack_300);
    local_308 = 7.291128972912953e-304;
    local_2f8 = 7.291128972912953e-304;
    uStack_2f0 = uStack_300;
    if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_258);
    }
    FUN_140041b80(local_258,&local_2f8);
    local_308 = _DAT_141dc7280;
    uStack_300 = dRam0000000141dc7288;
    local_e8 = local_258;
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_248);
    }
    FUN_140041b80(local_248,&local_308);
    local_e0 = local_248;
    pdVar4 = (double *)gml_Script_InputMouseGuiY(param_1,param_2,&local_2b8,0,0);
    if (pdVar4 != &local_238) {
      local_308 = *pdVar4;
      uStack_300 = pdVar4[1];
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_308);
    }
    local_d8 = &local_238;
    pdVar4 = (double *)gml_Script_InputMouseMoved(param_1,param_2,&local_2c8,0,0);
    if (pdVar4 != &local_228) {
      local_308 = *pdVar4;
      uStack_300 = pdVar4[1];
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_308);
    }
    local_d0 = &local_228;
    local_308 = DAT_1419df7b0;
    uStack_300 = (double)_DAT_1419df7b8;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_308);
    local_c8 = local_218;
    local_308 = DAT_1419df7b0;
    uStack_300 = (double)_DAT_1419df7b8;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_308);
    local_c0 = local_208;
    local_308 = DAT_1419df7b0;
    uStack_300 = (double)_DAT_1419df7b8;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f8);
    }
    FUN_140041b80(&local_1f8,&local_308);
    local_b8 = &local_1f8;
    local_308 = DAT_1419df7b0;
    uStack_300 = (double)_DAT_1419df7b8;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    FUN_140041b80(&local_1e8,&local_308);
    local_b0 = &local_1e8;
    local_308 = DAT_1419df7b0;
    uStack_300 = (double)_DAT_1419df7b8;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_308);
    local_a8 = local_1d8;
    local_308 = DAT_1419df7b0;
    uStack_300 = (double)_DAT_1419df7b8;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_308);
    local_a0 = local_1c8;
    local_308 = DAT_1419df7b0;
    uStack_300 = (double)_DAT_1419df7b8;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_308);
    local_98 = &local_1b8;
    gml_Script_draw_text_scribble_ext(param_1,param_2,&local_2e8,0xb,&local_e8);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)local_2dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e8);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  _eh_vector_destructor_iterator_(local_258,0x10,0x16,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_278;
  return;
}

