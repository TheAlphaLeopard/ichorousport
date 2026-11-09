// gml_Object_oTitleTop_Draw_64 @ 0x140dc3760

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oTitleTop_Draw_64(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  double *pdVar8;
  uint uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong *local_res8;
  undefined8 local_res10;
  uint local_res18;
  code *pcVar13;
  undefined8 uVar14;
  double **ppdVar15;
  undefined4 uVar17;
  ulonglong uVar16;
  undefined8 local_3a8;
  undefined4 uStack_3a0;
  uint uStack_39c;
  undefined8 local_398;
  undefined4 local_390;
  undefined4 local_38c;
  double local_388;
  undefined4 uStack_380;
  uint uStack_37c;
  undefined8 local_378;
  undefined4 local_370;
  undefined4 local_36c;
  double local_368;
  undefined4 uStack_360;
  uint uStack_35c;
  undefined8 local_358;
  char *local_350;
  undefined4 local_348;
  double local_340;
  uint local_334;
  undefined8 local_330;
  undefined4 local_328;
  undefined4 local_324;
  double local_320;
  undefined4 local_314;
  double local_310;
  undefined4 local_308;
  undefined4 local_304;
  double local_300;
  undefined4 local_2f8;
  uint local_2f4;
  double local_2f0;
  undefined4 local_2e4;
  double local_2e0;
  undefined4 local_2d4;
  double local_2d0;
  undefined4 local_2c4;
  undefined8 local_2c0;
  undefined4 local_2b4;
  double local_2b0;
  undefined4 local_2a8;
  uint local_2a4;
  double local_298;
  byte local_28c;
  double local_288;
  byte local_27c;
  double local_278;
  byte local_26c;
  double local_268;
  byte local_25c;
  undefined1 local_258 [12];
  byte local_24c;
  double local_248;
  byte local_23c;
  double local_238;
  byte local_22c;
  undefined1 local_228 [12];
  byte local_21c;
  undefined1 local_218 [12];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined1 local_1a8 [12];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  undefined1 local_188 [12];
  byte local_17c;
  double local_178;
  undefined4 local_16c;
  double local_168;
  undefined4 local_15c;
  double local_158;
  undefined4 local_14c;
  double *local_148;
  double *local_140;
  double *local_138;
  double *local_130;
  undefined1 *local_128;
  double *local_120;
  double *local_118;
  undefined1 *local_110;
  double *local_108;
  undefined1 *local_100;
  undefined1 *local_f8;
  undefined1 *local_f0;
  double *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined1 local_98 [16];
  longlong local_88;
  
  local_res18 = 0;
  local_350 = "gml_Object_oTitleScreen_Draw_74";
  local_348 = 0;
  local_358 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_358;
  pcVar13 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_298,0x10,0x12,FUN_1400424d0,FUN_140041b30);
  local_2c4 = 0xffffff;
  local_2d0 = 0.0;
  local_16c = 0xffffff;
  local_178 = 0.0;
  local_314 = 0xffffff;
  local_320 = 0.0;
  local_2d4 = 0xffffff;
  local_2e0 = 0.0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_14c = 0xffffff;
  local_158 = 0.0;
  local_2e4 = 0xffffff;
  local_2f0 = 0.0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_15c = 0xffffff;
  local_168 = 0.0;
  local_2f4 = 0xffffff;
  local_300 = 0.0;
  local_304 = 0xffffff;
  local_310 = 0.0;
  local_2b4 = 0xffffff;
  local_2c0 = 0;
  local_38c = 0xffffff;
  local_398 = 0;
  local_36c = 0xffffff;
  local_378 = 0;
  local_324 = 0xffffff;
  local_330 = 0;
  local_334 = 0;
  local_340 = 1.0;
  local_348 = 4;
  uStack_37c = 0xf;
  local_388 = 7.291122019556906e-304;
  iVar5 = FUN_140e63cb0(local_98,&local_res8,&local_res10,&local_388);
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  uVar6 = (undefined4)((ulonglong)pcVar13 >> 0x20);
  if (0 < iVar5) {
    do {
      local_348 = 5;
      uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a57840);
      uStack_37c = 0;
      local_388 = 1.0;
      local_res18 = 4;
      FUN_1400462a0(&local_388,uVar7);
      local_3a8 = local_388;
      uStack_3a0 = uStack_380;
      uStack_39c = uStack_37c;
      if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_340);
      }
      FUN_140041b80(&local_340,&local_3a8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_388);
      }
      cVar3 = FUN_140e643f0(local_98,&local_res8,&local_res10);
      uVar6 = (undefined4)((ulonglong)pcVar13 >> 0x20);
    } while (cVar3 != '\0');
  }
  FUN_140e63970(local_98,&local_res8,&local_res10);
  local_348 = 7;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_39c = 0xf;
  local_3a8 = 7.291122019556725e-304;
  local_388 = 7.291122019556725e-304;
  uStack_380 = uStack_3a0;
  uStack_37c = 0xf;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_388);
  local_148 = &local_298;
  ppdVar15 = &local_148;
  uVar14 = CONCAT44(uVar6,DAT_141a02ef8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_398,1,uVar14,ppdVar15);
  uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uVar17 = (undefined4)((ulonglong)ppdVar15 >> 0x20);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 != '\0') {
    local_348 = 8;
    if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_340);
    }
    local_334 = 0;
    local_340 = 0.0;
  }
  local_348 = 10;
  pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f2b28);
  local_2a4 = *(uint *)((longlong)pdVar8 + 0xc);
  local_2a8 = *(undefined4 *)(pdVar8 + 1);
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) == 0) {
    local_2b0 = *pdVar8;
  }
  else {
    FUN_1400419b0(&local_2b0,pdVar8);
  }
  local_res18 = 8;
  uStack_39c = 7;
  local_3a8 = (double)CONCAT44(local_3a8._4_4_,0x30);
  FUN_1400460e0(&local_2b0,&local_3a8);
  if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  uStack_35c = local_2a4;
  uStack_360 = local_2a8;
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) == 0) {
    local_368 = local_2b0;
  }
  else {
    FUN_1400419b0(&local_368,&local_2b0);
  }
  local_res18 = 0x18;
  uStack_39c = 7;
  local_3a8 = (double)CONCAT44(local_3a8._4_4_,0x14);
  FUN_1400460e0(&local_368,&local_3a8);
  if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_3a8);
  }
  uStack_37c = 0xf;
  local_388 = 7.291128972913664e-304;
  dVar10 = local_340;
  if ((local_334 & 0xffffff) != 0) {
    dVar10 = (double)FUN_140e4b060(&local_340);
  }
  dVar11 = local_368;
  if ((uStack_35c & 0xffffff) != 0) {
    dVar11 = (double)FUN_140e4b060(&local_368);
  }
  dVar12 = local_388;
  if ((uStack_37c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_388);
  }
  uVar16 = CONCAT44(uVar17,0x3e99999a);
  FUN_140ec5dd0(local_res8,(int)dVar12,0,0x43700000,CONCAT44(uVar6,(float)dVar11),uVar16,0x3e99999a,
                0,0xffffff,(float)dVar10);
  if ((1 << ((byte)uStack_37c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_res18 = 8;
  if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_368);
  }
  local_res18 = 0;
  if ((1 << ((byte)local_2a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b0);
  }
  local_348 = 0xc;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a01748);
  uStack_37c = DAT_141ddbb74;
  uStack_380 = DAT_141ddbb70;
  if ((1 << ((byte)DAT_141ddbb74 & 0x1f) & 0x46U) == 0) {
    local_388 = DAT_141ddbb68;
  }
  else {
    FUN_1400419b0(&local_388,&DAT_141ddbb68);
  }
  uVar9 = uStack_37c;
  local_3a8 = local_388;
  uStack_3a0 = uStack_380;
  uStack_39c = uStack_37c;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_3a8);
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_148 = &local_298;
  if (pdVar8 != &local_288) {
    local_3a8 = *pdVar8;
    uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
    uStack_39c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    FUN_140041b80(&local_288,&local_3a8);
  }
  local_140 = &local_288;
  pdVar8 = (double *)FUN_140e64420(local_res8,local_res10,&local_398,2,&local_148);
  if (pdVar8 != &local_2d0) {
    local_3a8 = *pdVar8;
    uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
    uStack_39c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d0);
    }
    FUN_140041b80(&local_2d0,&local_3a8);
  }
  local_348 = 0xd;
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a017e8);
  iVar5 = FUN_140e851f0(uVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 != 0) {
    local_348 = 0xe;
    if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_398);
    }
    local_398 = 0;
    local_390 = 0;
    local_38c = 5;
    pdVar8 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a017e8);
    uStack_37c = DAT_141ddbb64;
    uStack_380 = DAT_141ddbb60;
    if ((1 << ((byte)DAT_141ddbb64 & 0x1f) & 0x46U) == 0) {
      local_388 = DAT_141ddbb58;
    }
    else {
      FUN_1400419b0(&local_388,&DAT_141ddbb58);
    }
    uVar9 = uStack_37c;
    local_3a8 = local_388;
    uStack_3a0 = uStack_380;
    uStack_39c = uStack_37c;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_3a8);
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_388);
    }
    local_148 = &local_298;
    local_140 = &local_2d0;
    if (pdVar8 != &local_278) {
      local_3a8 = *pdVar8;
      uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
      uStack_39c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_3a8);
    }
    local_138 = &local_278;
    pdVar8 = (double *)FUN_140e64420(local_res8,local_res10,&local_398,3,&local_148);
    if (pdVar8 != &local_2d0) {
      local_3a8 = *pdVar8;
      uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
      uStack_39c = *(undefined4 *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2d0);
      }
      FUN_140041b80(&local_2d0,&local_3a8);
    }
  }
  local_348 = 0xf;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_378 = 0;
  local_370 = 0;
  local_36c = 5;
  if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_330);
  }
  local_330 = 0;
  local_328 = 0;
  local_324 = 5;
  local_3a8 = (double)CONCAT44(uRam0000000141ddbb8c,_DAT_141ddbb88);
  uStack_3a0 = uRam0000000141ddbb90;
  uStack_39c = DAT_141ddbb94;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_3a8);
  local_148 = &local_298;
  uStack_37c = DAT_141ddbb44;
  uStack_380 = DAT_141ddbb40;
  if ((1 << ((byte)DAT_141ddbb44 & 0x1f) & 0x46U) == 0) {
    local_388 = DAT_141ddbb38;
  }
  else {
    FUN_1400419b0(&local_388,&DAT_141ddbb38);
  }
  uVar9 = uStack_37c;
  local_3a8 = local_388;
  uStack_3a0 = uStack_380;
  uStack_39c = uStack_37c;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_3a8);
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_140 = &local_288;
  pdVar8 = (double *)gml_Script____struct___117(local_res8,local_res10,&local_330,1,&local_148);
  if (pdVar8 != &local_278) {
    local_3a8 = *pdVar8;
    uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
    uStack_39c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_3a8);
  }
  local_138 = &local_278;
  local_130 = &local_2d0;
  local_3a8 = (double)CONCAT44(uRam00000001419ee254,_DAT_1419ee250);
  uStack_3a0 = uRam00000001419ee258;
  uStack_39c = uRam00000001419ee25c;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_3a8);
  local_128 = local_258;
  local_3a8 = (double)CONCAT44(uRam00000001419ee244,_DAT_1419ee240);
  uStack_3a0 = uRam00000001419ee248;
  uStack_39c = uRam00000001419ee24c;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_3a8);
  local_120 = &local_248;
  pdVar8 = (double *)FUN_140e64420(local_res8,local_res10,&local_378,3,&local_140);
  if (pdVar8 != &local_238) {
    local_3a8 = *pdVar8;
    uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
    uStack_39c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_3a8);
  }
  local_118 = &local_238;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_3a8);
  local_110 = local_228;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_3a8);
  local_108 = (double *)local_218;
  local_3a8 = (double)CONCAT44(uRam00000001419ee264,_DAT_1419ee260);
  uStack_3a0 = uRam00000001419ee268;
  uStack_39c = uRam00000001419ee26c;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_3a8);
  local_100 = local_208;
  local_3a8 = (double)CONCAT44(uRam00000001419ee264,_DAT_1419ee260);
  uStack_3a0 = uRam00000001419ee268;
  uStack_39c = uRam00000001419ee26c;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_3a8);
  local_f8 = local_1f8;
  local_3a8 = (double)CONCAT44(uRam00000001419ee224,_DAT_1419ee220);
  uStack_3a0 = uRam00000001419ee228;
  uStack_39c = uRam00000001419ee22c;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_3a8);
  local_f0 = local_1e8;
  local_e8 = &local_340;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_3a8);
  local_e0 = local_1c8;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1b8);
  }
  FUN_140041b80(local_1b8,&local_3a8);
  local_d8 = local_1b8;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1a8);
  }
  FUN_140041b80(local_1a8,&local_3a8);
  local_d0 = local_1a8;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_198);
  }
  FUN_140041b80(local_198,&local_3a8);
  local_c8 = local_198;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_188);
  }
  FUN_140041b80(local_188,&local_3a8);
  local_c0 = local_188;
  gml_Script_draw_sprite_hires(local_res8,local_res10,&local_398,0xe,&local_128);
  local_348 = 0x11;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_378 = 0;
  local_370 = 0;
  local_36c = 5;
  local_3a8 = (double)CONCAT44(uRam0000000141ddbb8c,_DAT_141ddbb88);
  uStack_3a0 = uRam0000000141ddbb90;
  uStack_39c = DAT_141ddbb94;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_3a8);
  local_148 = &local_298;
  uStack_37c = DAT_141ddbb54;
  uStack_380 = DAT_141ddbb50;
  if ((1 << ((byte)DAT_141ddbb54 & 0x1f) & 0x46U) == 0) {
    local_388 = DAT_141ddbb48;
  }
  else {
    FUN_1400419b0(&local_388,&DAT_141ddbb48);
  }
  uVar9 = uStack_37c;
  local_3a8 = local_388;
  uStack_3a0 = uStack_380;
  uStack_39c = uStack_37c;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_3a8);
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_140 = &local_288;
  pdVar8 = (double *)gml_Script____struct___117(local_res8,local_res10,&local_378,1,&local_148);
  if (pdVar8 != &local_278) {
    local_3a8 = *pdVar8;
    uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
    uStack_39c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << (local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    FUN_140041b80(&local_278,&local_3a8);
  }
  local_138 = &local_278;
  pdVar8 = (double *)FUN_140e64420(local_res8,local_res10,&local_398,2,&local_140);
  if (pdVar8 != &local_178) {
    local_3a8 = *pdVar8;
    uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
    uStack_39c = *(undefined4 *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_3a8);
  }
  local_348 = 0x12;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  uStack_37c = DAT_141ddbb24;
  uStack_380 = DAT_141ddbb20;
  if ((1 << ((byte)DAT_141ddbb24 & 0x1f) & 0x46U) == 0) {
    local_388 = DAT_141ddbb18;
  }
  else {
    FUN_1400419b0(&local_388,&DAT_141ddbb18);
  }
  uVar9 = uStack_37c;
  local_3a8 = local_388;
  uStack_3a0 = uStack_380;
  uStack_39c = uStack_37c;
  if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  FUN_140041b80(&local_298,&local_3a8);
  if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_388);
  }
  local_148 = &local_298;
  local_140 = &local_178;
  pdVar8 = (double *)FUN_140e64420(local_res8,local_res10,&local_398,2,&local_148);
  if (pdVar8 != &local_320) {
    local_3a8 = *pdVar8;
    uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
    uStack_39c = *(uint *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_320);
    }
    FUN_140041b80(&local_320,&local_3a8);
  }
  local_348 = 0x13;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_378 = 0;
  local_370 = 0;
  local_36c = 5;
  local_148 = &local_320;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_3a8);
  local_140 = &local_288;
  ppdVar15 = &local_148;
  pdVar8 = (double *)gml_Script_seg_add(local_res8,local_res10,&local_398,2,ppdVar15);
  if (pdVar8 != &local_2e0) {
    local_3a8 = *pdVar8;
    uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
    uStack_39c = *(uint *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2e0);
    }
    FUN_140041b80(&local_2e0,&local_3a8);
  }
  FUN_140e87440(&local_2e0,DAT_141a04df8,0x80000000,&local_a8,
                (ulonglong)ppdVar15 & 0xffffffffffffff00,uVar16 & 0xffffffffffffff00);
  switch(local_2d4) {
  default:
switchD_140dc4ac4_caseD_1:
    dVar10 = 0.0;
    break;
  case 6:
    dVar10 = local_2e0;
    break;
  case 0xf:
    iVar5 = (int)((ulonglong)local_2e0 >> 0x20);
    if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_140dc4ac4_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar6 = FUN_140e4a8b0(&local_2e0);
    dVar10 = (double)FUN_140e87250(uVar6);
  }
  uVar16 = 0;
  pdVar8 = (double *)FUN_140e63610(dVar10,local_res10,&local_378,0,&local_a8,0);
  if (pdVar8 != &local_158) {
    local_3a8 = *pdVar8;
    uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
    uStack_39c = *(uint *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_3a8);
  }
  local_348 = 0x14;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  local_378 = 0;
  local_370 = 0;
  local_36c = 5;
  local_148 = &local_320;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  FUN_140041b80(&local_288,&local_3a8);
  local_140 = &local_288;
  ppdVar15 = &local_148;
  pdVar8 = (double *)gml_Script_seg_add(local_res8,local_res10,&local_398,2,ppdVar15);
  if (pdVar8 != &local_2f0) {
    local_3a8 = *pdVar8;
    uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
    uStack_39c = *(uint *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2f0);
    }
    FUN_140041b80(&local_2f0,&local_3a8);
  }
  FUN_140e87440(&local_2f0,DAT_141a05018,0x80000000,&local_b8,
                (ulonglong)ppdVar15 & 0xffffffffffffff00,uVar16 & 0xffffffffffffff00);
  switch(local_2e4) {
  default:
switchD_140dc4c97_caseD_1:
    dVar10 = 0.0;
    break;
  case 6:
    dVar10 = local_2f0;
    break;
  case 0xf:
    iVar5 = (int)((ulonglong)local_2f0 >> 0x20);
    if ((iVar5 != 0x1000000) && (iVar5 != 0x4000001)) goto switchD_140dc4c97_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar6 = FUN_140e4a8b0(&local_2f0);
    dVar10 = (double)FUN_140e87250(uVar6);
  }
  pdVar8 = (double *)FUN_140e63610(dVar10,local_res10,&local_378,0,&local_b8,0);
  if (pdVar8 != &local_168) {
    local_3a8 = *pdVar8;
    uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
    uStack_39c = *(uint *)((longlong)pdVar8 + 0xc);
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_3a8);
  }
  local_348 = 0x15;
  if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_300);
  }
  local_2f4 = 0;
  local_300 = 14.0;
  local_348 = 0x16;
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  local_304 = 0;
  local_310 = 258.0;
  local_348 = 0x17;
  cVar4 = '\0';
  uVar7 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a575f0);
  cVar3 = FUN_140e491e0(uVar7);
  if (cVar3 != '\0') {
    uStack_39c = 0;
    local_3a8 = 0.5;
    iVar5 = FUN_140e851f0(&local_340,&local_3a8,DAT_141955260,1);
    if ((1 << ((byte)uStack_39c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_3a8);
    }
    if (0 < iVar5) {
      if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_398);
      }
      local_398 = 0;
      local_390 = 0;
      local_38c = 5;
      if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_378 = 0;
      local_370 = 0;
      local_36c = 5;
      if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_330);
      }
      local_330 = 0;
      local_328 = 0;
      local_324 = 5;
      pdVar8 = (double *)gml_Script_InputMouseGuiY(local_res8,local_res10,&local_378,0,0);
      if (pdVar8 != &local_298) {
        local_3a8 = *pdVar8;
        uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
        uStack_39c = *(uint *)((longlong)pdVar8 + 0xc);
        if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_298);
        }
        FUN_140041b80(&local_298,&local_3a8);
      }
      local_148 = &local_298;
      uVar6 = 0;
      pdVar8 = (double *)gml_Script_InputMouseMoved(local_res8,local_res10,&local_330,0,0);
      if (pdVar8 != &local_288) {
        local_3a8 = *pdVar8;
        uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
        uStack_39c = *(uint *)((longlong)pdVar8 + 0xc);
        if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_288);
        }
        FUN_140041b80(&local_288,&local_3a8);
      }
      local_140 = &local_288;
      local_138 = &local_300;
      uStack_35c = local_304;
      uStack_360 = local_308;
      if ((1 << ((byte)local_304 & 0x1f) & 0x46U) == 0) {
        local_368 = local_310;
      }
      else {
        FUN_1400419b0(&local_368,&local_310);
      }
      local_res18 = 0x400;
      FUN_1400462a0(&local_368,&local_168);
      local_3a8 = local_368;
      uStack_3a0 = uStack_360;
      uStack_39c = uStack_35c;
      if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      FUN_140041b80(&local_268,&local_3a8);
      local_res18 = 0;
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      local_130 = &local_268;
      uStack_35c = local_2f4;
      uStack_360 = local_2f8;
      if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) == 0) {
        local_368 = local_300;
      }
      else {
        FUN_1400419b0(&local_368,&local_300);
      }
      local_res18 = 0x800;
      FUN_1400460e0(&local_368,&local_158);
      local_3a8 = local_368;
      uStack_3a0 = uStack_360;
      uStack_39c = uStack_35c;
      if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_258);
      }
      FUN_140041b80(local_258,&local_3a8);
      if ((1 << ((byte)uStack_35c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_368);
      }
      local_128 = local_258;
      local_120 = &local_310;
      uVar7 = FUN_140e634e0(local_res8,local_res10,&local_398,6,CONCAT44(uVar6,DAT_1419fe198),
                            &local_148);
      cVar4 = FUN_140e491e0(uVar7);
    }
  }
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  local_2b4 = 0xd;
  if (cVar4 == '\0') {
    local_2c0 = 0;
  }
  else {
    local_2c0 = 0x3ff0000000000000;
  }
  local_348 = 0x19;
  cVar3 = FUN_140e491e0(&local_2c0);
  if (cVar3 != '\0') {
    local_348 = 0x1a;
    if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_398);
    }
    local_398 = 0;
    local_390 = 0;
    local_38c = 5;
    uStack_37c = DAT_141ddbb34;
    uStack_380 = DAT_141ddbb30;
    if ((1 << ((byte)DAT_141ddbb34 & 0x1f) & 0x46U) == 0) {
      local_388 = DAT_141ddbb28;
    }
    else {
      FUN_1400419b0(&local_388,&DAT_141ddbb28);
    }
    uVar9 = uStack_37c;
    local_3a8 = local_388;
    uStack_3a0 = uStack_380;
    uStack_39c = uStack_37c;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_3a8);
    if ((1 << ((byte)uVar9 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_388);
    }
    local_148 = &local_298;
    local_140 = &local_178;
    pdVar8 = (double *)FUN_140e64420(local_res8,local_res10,&local_398,2,&local_148);
    if (pdVar8 != &local_320) {
      local_3a8 = *pdVar8;
      uStack_3a0 = *(undefined4 *)(pdVar8 + 1);
      uStack_39c = *(uint *)((longlong)pdVar8 + 0xc);
      if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_320);
      }
      FUN_140041b80(&local_320,&local_3a8);
    }
  }
  local_348 = 0x1c;
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  local_398 = 0;
  local_390 = 0;
  local_38c = 5;
  local_148 = &local_300;
  local_140 = &local_310;
  local_138 = &local_320;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  FUN_140041b80(&local_268,&local_3a8);
  local_130 = &local_268;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_258);
  }
  FUN_140041b80(local_258,&local_3a8);
  local_128 = local_258;
  local_3a8 = (double)CONCAT44(uRam0000000141dc7864,_DAT_141dc7860);
  uStack_3a0 = uRam0000000141dc7868;
  uStack_39c = uRam0000000141dc786c;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_3a8);
  local_120 = &local_248;
  local_3a8 = (double)CONCAT44(uRam00000001419ee264,_DAT_1419ee260);
  uStack_3a0 = uRam00000001419ee268;
  uStack_39c = uRam00000001419ee26c;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_3a8);
  local_118 = &local_238;
  cVar3 = FUN_140e491e0(&local_2c0);
  if (cVar3 == '\0') {
    uStack_39c = 0;
    local_3a8 = 16777215.0;
    pdVar8 = (double *)&local_3a8;
    uVar9 = 2;
  }
  else {
    uStack_37c = 0;
    local_388 = 65535.0;
    pdVar8 = &local_388;
    uVar9 = 1;
  }
  uVar2 = uStack_37c;
  uVar1 = uStack_39c;
  local_368 = *pdVar8;
  uStack_360 = *(undefined4 *)(pdVar8 + 1);
  uStack_35c = *(undefined4 *)((longlong)pdVar8 + 0xc);
  local_res18 = uVar9;
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_228);
  }
  FUN_140041b80(local_228,&local_368);
  if (((uVar9 & 2) != 0) &&
     (uVar9 = uVar9 & 0xfffffffd, local_res18 = uVar9, (1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_3a8);
  }
  if (((uVar9 & 1) != 0) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_388);
  }
  local_110 = local_228;
  local_108 = &local_340;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_3a8);
  local_100 = local_208;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_3a8);
  local_f8 = local_1f8;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_3a8);
  local_f0 = local_1e8;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_3a8);
  local_e8 = (double *)local_1d8;
  local_3a8 = (double)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_3a0 = DAT_1419df7b8;
  uStack_39c = DAT_1419df7bc;
  if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_3a8);
  local_e0 = local_1c8;
  ppdVar15 = &local_148;
  gml_Script_draw_sprite_hires(local_res8,local_res10,&local_398,0xe,ppdVar15);
  uVar6 = (undefined4)((ulonglong)ppdVar15 >> 0x20);
  local_348 = 0x1e;
  cVar3 = FUN_140e491e0(&local_2c0);
  if (cVar3 != '\0') {
    if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_398);
    }
    local_398 = 0;
    local_390 = 0;
    local_38c = 5;
    local_3a8 = (double)CONCAT44(uRam00000001419ee234,_DAT_1419ee230);
    uStack_3a0 = uRam00000001419ee238;
    uStack_39c = uRam00000001419ee23c;
    if ((1 << (local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    FUN_140041b80(&local_298,&local_3a8);
    local_148 = &local_298;
    uVar14 = CONCAT44(uVar6,DAT_141a44e08);
    uVar7 = FUN_140e634e0(local_res8,local_res10,&local_398,1,uVar14,&local_148);
    uVar6 = (undefined4)((ulonglong)uVar14 >> 0x20);
    cVar3 = FUN_140e491e0(uVar7);
    if (cVar3 != '\0') {
      local_348 = 0x1f;
      if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_378);
      }
      local_378 = 0;
      local_370 = 0;
      local_36c = 5;
      local_3a8 = (double)CONCAT44(uRam0000000141ddbb7c,_DAT_141ddbb78);
      uStack_3a0 = uRam0000000141ddbb80;
      uStack_39c = DAT_141ddbb84;
      if ((1 << (local_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      FUN_140041b80(&local_288,&local_3a8);
      local_140 = &local_288;
      FUN_140e634e0(local_res8,local_res10,&local_378,1,CONCAT44(uVar6,DAT_141a01878),&local_140);
    }
  }
  if (local_88 != 0) {
    FUN_140e4cd60();
    local_88 = 0;
  }
  if ((1 << ((byte)local_324 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_330);
  }
  if ((1 << ((byte)local_36c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_378);
  }
  if ((1 << ((byte)local_38c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_398);
  }
  if ((1 << ((byte)local_2b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c0);
  }
  if ((1 << ((byte)local_304 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_310);
  }
  if ((1 << ((byte)local_2f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_300);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_2e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2f0);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_2d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2e0);
  }
  if ((1 << ((byte)local_314 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_320);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_2c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2d0);
  }
  if ((1 << ((byte)local_334 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_340);
  }
  _eh_vector_destructor_iterator_(&local_298,0x10,0x12,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_358;
  return;
}

