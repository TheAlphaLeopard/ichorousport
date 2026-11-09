// gml_Object_oCardBlood_Step_0 @ 0x140897000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oCardBlood_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  double *pdVar10;
  undefined8 uVar11;
  double *pdVar12;
  longlong *plVar13;
  longlong *plVar14;
  double dVar15;
  ulonglong uVar16;
  undefined8 uVar17;
  double **ppdVar18;
  ulonglong uVar19;
  undefined8 local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined4 local_2a8;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  char *local_260;
  undefined4 local_258;
  double local_248;
  byte local_23c;
  double local_238;
  byte local_22c;
  double local_228;
  byte local_21c;
  double local_218;
  byte local_20c;
  double local_208;
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined1 local_1e8 [12];
  byte local_1dc;
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  double *local_1b8;
  double *local_1b0;
  double *local_1a8;
  double *local_1a0;
  double *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  double local_148;
  undefined4 local_13c;
  double local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  double local_118;
  undefined4 local_10c;
  double local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  double local_f8;
  undefined4 local_ec;
  double local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 local_3c;
  
  local_260 = "gml_Object_oCam_Draw_77";
  local_258 = 0;
  local_268 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_268;
  uVar3 = 1;
  _eh_vector_constructor_iterator_(&local_248,0x10,8,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_3c = 0xffffff;
  local_48 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_12c = 0xffffff;
  local_138 = 0.0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_13c = 0xffffff;
  local_148 = 0.0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57d00);
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef3c8);
  uVar6 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419ef678);
  local_15c = 0xffffff;
  local_168 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0.0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_10c = 0xffffff;
  local_118 = 0.0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0.0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0.0;
  uVar7 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1d980);
  uVar8 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1db10);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_2bc = 0xffffff;
  local_2c8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_26c = 0xffffff;
  local_278 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_258 = 3;
  local_288 = (double)CONCAT44(uRam0000000141dc6be4,_DAT_141dc6be0);
  uStack_280 = uRam0000000141dc6be8;
  uStack_27c = uRam0000000141dc6bec;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_288);
  local_1b8 = &local_248;
  ppdVar18 = &local_1b8;
  FUN_140e634e0(param_1,param_2,&local_2c8,1,CONCAT44(uVar3,DAT_1419f52e8),ppdVar18);
  local_258 = 5;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  uVar16 = 0;
  puVar9 = (undefined8 *)
           gml_Script____struct___96_WindowGetMonitorRect_GameViewRect
                     (param_1,param_2,&local_2c8,0,0);
  if (puVar9 != &local_158) {
    local_288 = (double)*puVar9;
    uStack_280 = *(undefined4 *)(puVar9 + 1);
    uStack_27c = *(undefined4 *)((longlong)puVar9 + 0xc);
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140041b80(&local_158,&local_288);
  }
  local_258 = 6;
  uVar19 = (ulonglong)ppdVar18 & 0xffffffffffffff00;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_141a05568,0x80000000,&local_58,uVar16,uVar19);
  local_288 = (double)local_58;
  uStack_280 = uStack_50;
  uStack_27c = uStack_4c;
  FUN_140041b80(&local_48,&local_288);
  local_258 = 7;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_141a00fd8,0x80000000,&local_68,uVar16,uVar19 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar16 >> 0x20);
  local_288 = (double)local_68;
  uStack_280 = uStack_60;
  uStack_27c = uStack_5c;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_288);
  local_1b8 = &local_248;
  local_288 = (double)CONCAT44(uRam00000001419e9454,_DAT_1419e9450);
  uStack_280 = uRam00000001419e9458;
  uStack_27c = uRam00000001419e945c;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_288);
  local_1b0 = &local_238;
  ppdVar18 = &local_1b8;
  uVar16 = CONCAT44(uVar3,DAT_1419fe728);
  pdVar10 = (double *)FUN_140e634e0(param_1,param_2,&local_298,1,uVar16,ppdVar18);
  if (pdVar10 != &local_228) {
    local_288 = *pdVar10;
    uStack_280 = *(undefined4 *)(pdVar10 + 1);
    uStack_27c = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_288);
  }
  local_1a8 = &local_228;
  pdVar10 = (double *)FUN_140e79090(&local_2c8,2,&local_1b0);
  if (pdVar10 != &local_138) {
    local_288 = *pdVar10;
    uStack_280 = *(undefined4 *)(pdVar10 + 1);
    uStack_27c = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    FUN_140041b80(&local_138,&local_288);
  }
  local_258 = 8;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_298 = 0;
  local_290 = 0;
  local_28c = 5;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_158,DAT_141a01058,0x80000000,&local_78,uVar16,
                (ulonglong)ppdVar18 & 0xffffffffffffff00);
  uVar3 = (undefined4)(uVar16 >> 0x20);
  local_288 = (double)local_78;
  uStack_280 = uStack_70;
  uStack_27c = uStack_6c;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_288);
  local_1b8 = &local_248;
  local_288 = (double)CONCAT44(uRam00000001419e9454,_DAT_1419e9450);
  uStack_280 = uRam00000001419e9458;
  uStack_27c = uRam00000001419e945c;
  if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140041b80(&local_238,&local_288);
  local_1b0 = &local_238;
  uVar11 = CONCAT44(uVar3,DAT_1419fe728);
  pdVar10 = (double *)FUN_140e634e0(param_1,param_2,&local_298,1,uVar11,&local_1b8);
  uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
  if (pdVar10 != &local_228) {
    local_288 = *pdVar10;
    uStack_280 = *(undefined4 *)(pdVar10 + 1);
    uStack_27c = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_288);
  }
  local_1a8 = &local_228;
  pdVar10 = (double *)FUN_140e79090(&local_2c8,2,&local_1b0);
  if (pdVar10 != &local_148) {
    local_288 = *pdVar10;
    uStack_280 = *(undefined4 *)(pdVar10 + 1);
    uStack_27c = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    FUN_140041b80(&local_148,&local_288);
  }
  local_258 = 10;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a15ac8);
  if (pdVar10 != &local_248) {
    local_288 = *pdVar10;
    uStack_280 = *(undefined4 *)(pdVar10 + 1);
    uStack_27c = *(undefined4 *)((longlong)pdVar10 + 0xc);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_288);
  }
  local_1b8 = &local_248;
  uVar17 = CONCAT44(uVar3,DAT_141a04798);
  uVar11 = FUN_140e634e0(param_1,param_2,&local_2c8,1,uVar17,&local_1b8);
  uVar3 = (undefined4)((ulonglong)uVar17 >> 0x20);
  cVar1 = FUN_140e491e0(uVar11);
  if (cVar1 == '\0') {
LAB_140897947:
    local_258 = 0xd;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a15ac8);
    if (pdVar10 != &local_218) {
      local_288 = *pdVar10;
      uStack_280 = *(undefined4 *)(pdVar10 + 1);
      uStack_27c = *(undefined4 *)((longlong)pdVar10 + 0xc);
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_288);
    }
    local_1a0 = &local_218;
    uVar17 = CONCAT44(uVar3,DAT_141a04798);
    uVar11 = FUN_140e634e0(param_1,param_2,&local_1c8,1,uVar17,&local_1a0);
    uVar3 = (undefined4)((ulonglong)uVar17 >> 0x20);
    cVar1 = FUN_140e491e0(uVar11);
    if (cVar1 != '\0') {
      local_258 = 0xd;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_128 = 0;
      local_120 = 0;
      local_11c = 5;
      pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a15ac8);
      if (pdVar10 != &local_208) {
        local_288 = *pdVar10;
        uStack_280 = *(undefined4 *)(pdVar10 + 1);
        uStack_27c = *(undefined4 *)((longlong)pdVar10 + 0xc);
        if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        FUN_140041b80(&local_208,&local_288);
      }
      local_198 = &local_208;
      uVar11 = CONCAT44(uVar3,DAT_141a04918);
      FUN_140e634e0(param_1,param_2,&local_128,1,uVar11,&local_198);
      uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
    }
    local_258 = 0xe;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    pdVar10 = (double *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a15ac8);
    local_1b8 = &local_138;
    local_1b0 = &local_148;
    FUN_140e609c0(param_1);
    ppdVar18 = &local_1b8;
    uVar11 = CONCAT44(uVar3,DAT_141a04a78);
    pdVar12 = (double *)FUN_140e634e0(param_1,param_2,&local_2c8,2,uVar11,ppdVar18);
    uVar3 = (undefined4)((ulonglong)uVar11 >> 0x20);
    if (pdVar12 != pdVar10) {
      local_288 = *pdVar12;
      uStack_280 = *(undefined4 *)(pdVar12 + 1);
      uStack_27c = *(undefined4 *)((longlong)pdVar12 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar10);
      }
      FUN_140041b80(pdVar10,&local_288);
    }
    FUN_140e60910(1);
  }
  else {
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a15ac8);
    if (pdVar10 != &local_238) {
      local_288 = *pdVar10;
      uStack_280 = *(undefined4 *)(pdVar10 + 1);
      uStack_27c = *(undefined4 *)((longlong)pdVar10 + 0xc);
      if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      FUN_140041b80(&local_238,&local_288);
    }
    local_1b0 = &local_238;
    uVar17 = CONCAT44(uVar3,DAT_141a047b8);
    uVar11 = FUN_140e634e0(param_1,param_2,&local_298,1,uVar17,&local_1b0);
    uVar3 = (undefined4)((ulonglong)uVar17 >> 0x20);
    iVar2 = FUN_140e851f0(uVar11,&local_138,DAT_141955260,0);
    if (iVar2 != 0) goto LAB_140897947;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a15ac8);
    if (pdVar10 != &local_228) {
      local_288 = *pdVar10;
      uStack_280 = *(undefined4 *)(pdVar10 + 1);
      uStack_27c = *(undefined4 *)((longlong)pdVar10 + 0xc);
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_288);
    }
    local_1a8 = &local_228;
    ppdVar18 = &local_1a8;
    uVar17 = CONCAT44(uVar3,DAT_141a04548);
    uVar11 = FUN_140e634e0(param_1,param_2,&local_278,1,uVar17,ppdVar18);
    uVar3 = (undefined4)((ulonglong)uVar17 >> 0x20);
    iVar2 = FUN_140e851f0(uVar11,&local_148,DAT_141955260,0);
    if (iVar2 != 0) goto LAB_140897947;
  }
  local_258 = 0x11;
  cVar1 = FUN_140e491e0(uVar4);
  if (((cVar1 == '\0') || (cVar1 = FUN_140e491e0(uVar5), cVar1 == '\0')) ||
     (cVar1 = FUN_140e491e0(uVar6), cVar1 != '\0')) {
LAB_14089834f:
    local_258 = 0x1e;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar16 = 0;
    puVar9 = (undefined8 *)gml_Script_lighting_system_sprite(param_1,param_2,&local_2c8,0,0);
    if (puVar9 != &local_178) {
      local_2b8 = (undefined8 *)*puVar9;
      uStack_2b0 = (char *)puVar9[1];
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_2b8);
    }
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_1419f5198,0x80000000,&local_98,uVar16,
                  (ulonglong)ppdVar18 & 0xffffffffffffff00);
    uVar3 = (undefined4)(uVar16 >> 0x20);
    FUN_140e85f80(param_1,DAT_141a04608,0x80000000,&local_108);
    local_2b8 = (undefined8 *)local_108;
    uStack_2b0 = (char *)CONCAT44(uStack_fc,uStack_100);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_1b8 = &local_248;
    local_2b8 = (undefined8 *)local_108;
    uStack_2b0 = (char *)CONCAT44(uStack_fc,uStack_100);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2b8);
    local_1b0 = &local_238;
    uVar4 = CONCAT44(uVar3,DAT_141a047b8);
    pdVar10 = (double *)FUN_140e634e0(param_1,param_2,&local_278,1,uVar4,&local_1b8);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (pdVar10 != &local_228) {
      local_2b8 = (undefined8 *)*pdVar10;
      uStack_2b0 = (char *)pdVar10[1];
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2b8);
    }
    local_1a8 = &local_228;
    pdVar10 = (double *)
              FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar3,DAT_141a04548),&local_1b0);
    if (pdVar10 != &local_218) {
      local_2b8 = (undefined8 *)*pdVar10;
      uStack_2b0 = (char *)pdVar10[1];
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_2b8);
    }
    local_1a0 = &local_218;
    switch(local_16c) {
    default:
switchD_1408985ec_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_178;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_178 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_1408985ec_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_178);
      uVar4 = FUN_140e87250(uVar3);
    }
    puVar9 = &local_98;
    FUN_140e63610(uVar4,param_2,&local_298,2,puVar9,&local_1a8);
    uVar3 = (undefined4)((ulonglong)puVar9 >> 0x20);
    local_258 = 0x20;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_2b8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_2b0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_1b8 = &local_248;
    uVar4 = CONCAT44(uVar3,DAT_1419f5148);
    FUN_140e634e0(param_1,param_2,&local_2c8,1,uVar4,&local_1b8);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_258 = 0x21;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_2b8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_2b0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_1b8 = &local_248;
    ppdVar18 = &local_1b8;
    FUN_140e634e0(param_1,param_2,&local_2c8,1,CONCAT44(uVar3,DAT_141a07438),ppdVar18);
    local_258 = 0x22;
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a15ac8);
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar15 = *pdVar10;
    }
    else {
      dVar15 = (double)FUN_140e4b060(pdVar10);
    }
    FUN_140ec60c0((longlong)dVar15,0xffffffff);
    local_258 = 0x23;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    uVar16 = 0;
    uVar4 = gml_Script_lighting_system_sprite(param_1,param_2,&local_298,0,0);
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419f5268,0x80000000,&local_d8,uVar16,
                  (ulonglong)ppdVar18 & 0xffffffffffffff00);
    uVar3 = (undefined4)(uVar16 >> 0x20);
    local_2b8 = (undefined8 *)local_d8;
    uStack_2b0 = (char *)CONCAT44(uStack_cc,uStack_d0);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_1b8 = &local_248;
    local_2b8 = (undefined8 *)CONCAT44(uRam0000000141dc6be4,_DAT_141dc6be0);
    uStack_2b0 = (char *)CONCAT44(uRam0000000141dc6bec,uRam0000000141dc6be8);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2b8);
    local_1b0 = &local_238;
    local_2b8 = (undefined8 *)CONCAT44(uRam0000000141dc6be4,_DAT_141dc6be0);
    uStack_2b0 = (char *)CONCAT44(uRam0000000141dc6bec,uRam0000000141dc6be8);
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2b8);
    local_1a8 = &local_228;
    local_1a0 = &local_138;
    local_198 = &local_148;
    uVar4 = CONCAT44(uVar3,DAT_141a04758);
    FUN_140e634e0(param_1,param_2,&local_2c8,5,uVar4,&local_1b8);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_258 = 0x24;
    FUN_140ec7870();
    local_258 = 0x25;
  }
  else {
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    uStack_27c = 0xf;
    local_288 = 7.291122019556828e-304;
    local_2b8 = (undefined8 *)0x10000000000010a;
    uStack_2b0 = (char *)CONCAT44(0xf,uStack_280);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_1b8 = &local_248;
    ppdVar18 = &local_1b8;
    uVar5 = CONCAT44(uVar3,DAT_141a02ef8);
    uVar4 = FUN_140e634e0(param_1,param_2,&local_2c8,1,uVar5,ppdVar18);
    uVar3 = (undefined4)((ulonglong)uVar5 >> 0x20);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') goto LAB_14089834f;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    uStack_27c = 0xf;
    local_288 = 7.291122019556593e-304;
    local_2b8 = (undefined8 *)0x100000000000079;
    uStack_2b0 = (char *)CONCAT44(0xf,uStack_280);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2b8);
    local_1b0 = &local_238;
    ppdVar18 = &local_1b0;
    uVar4 = FUN_140e634e0(param_1,param_2,&local_298,1,CONCAT44(uVar3,DAT_141a02ef8),ppdVar18);
    cVar1 = FUN_140e491e0(uVar4);
    if (cVar1 != '\0') goto LAB_14089834f;
    local_258 = 0x12;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    gml_Script_mixer_apply_db(param_1,param_2,&local_278,0,0);
    local_258 = 0x14;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    uVar16 = 0;
    puVar9 = (undefined8 *)gml_Script_lighting_system_sprite(param_1,param_2,&local_2c8,0,0);
    if (puVar9 != &local_168) {
      local_2b8 = (undefined8 *)*puVar9;
      uStack_2b0 = (char *)puVar9[1];
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_2b8);
    }
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_168,DAT_1419f5318,0x80000000,&local_88,uVar16,
                  (ulonglong)ppdVar18 & 0xffffffffffffff00);
    uVar3 = (undefined4)(uVar16 >> 0x20);
    FUN_140e85f80(param_1,DAT_141a04608,0x80000000,&local_108);
    local_2b8 = (undefined8 *)local_108;
    uStack_2b0 = (char *)CONCAT44(uStack_fc,uStack_100);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_1b8 = &local_248;
    local_2b8 = (undefined8 *)local_108;
    uStack_2b0 = (char *)CONCAT44(uStack_fc,uStack_100);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2b8);
    local_1b0 = &local_238;
    uVar4 = CONCAT44(uVar3,DAT_141a047b8);
    pdVar10 = (double *)FUN_140e634e0(param_1,param_2,&local_278,1,uVar4,&local_1b8);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    if (pdVar10 != &local_228) {
      local_2b8 = (undefined8 *)*pdVar10;
      uStack_2b0 = (char *)pdVar10[1];
      if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2b8);
    }
    local_1a8 = &local_228;
    pdVar10 = (double *)
              FUN_140e634e0(param_1,param_2,&local_1c8,1,CONCAT44(uVar3,DAT_141a04548),&local_1b0);
    if (pdVar10 != &local_218) {
      local_2b8 = (undefined8 *)*pdVar10;
      uStack_2b0 = (char *)pdVar10[1];
      if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_218);
      }
      FUN_140041b80(&local_218,&local_2b8);
    }
    local_1a0 = &local_218;
    switch(local_15c) {
    default:
switchD_140897fe7_caseD_1:
      uVar4 = 0;
      break;
    case 6:
      uVar4 = local_168;
      break;
    case 0xf:
      iVar2 = (int)((ulonglong)local_168 >> 0x20);
      if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140897fe7_caseD_1;
    case 0:
    case 7:
    case 10:
    case 0xd:
      uVar3 = FUN_140e4a8b0(&local_168);
      uVar4 = FUN_140e87250(uVar3);
    }
    puVar9 = &local_88;
    FUN_140e63610(uVar4,param_2,&local_298,2,puVar9,&local_1a8);
    uVar3 = (undefined4)((ulonglong)puVar9 >> 0x20);
    local_258 = 0x16;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_2b8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_2b0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_1b8 = &local_248;
    uVar4 = CONCAT44(uVar3,DAT_1419f5148);
    FUN_140e634e0(param_1,param_2,&local_2c8,1,uVar4,&local_1b8);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_258 = 0x17;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    local_2b8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
    uStack_2b0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_1b8 = &local_248;
    ppdVar18 = &local_1b8;
    FUN_140e634e0(param_1,param_2,&local_2c8,1,CONCAT44(uVar3,DAT_141a07438),ppdVar18);
    local_258 = 0x18;
    pdVar10 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a15ac8);
    if ((*(uint *)((longlong)pdVar10 + 0xc) & 0xffffff) == 0) {
      dVar15 = *pdVar10;
    }
    else {
      dVar15 = (double)FUN_140e4b060(pdVar10);
    }
    FUN_140ec60c0((longlong)dVar15,0xffffffff);
    local_258 = 0x19;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    uVar16 = 0;
    uVar4 = gml_Script_lighting_system_sprite(param_1,param_2,&local_298,0,0);
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(uVar4,DAT_1419f5268,0x80000000,&local_d8,uVar16,
                  (ulonglong)ppdVar18 & 0xffffffffffffff00);
    uVar3 = (undefined4)(uVar16 >> 0x20);
    local_2b8 = (undefined8 *)local_d8;
    uStack_2b0 = (char *)CONCAT44(uStack_cc,uStack_d0);
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
    local_1b8 = &local_248;
    local_2b8 = (undefined8 *)CONCAT44(uRam0000000141dc6be4,_DAT_141dc6be0);
    uStack_2b0 = (char *)CONCAT44(uRam0000000141dc6bec,uRam0000000141dc6be8);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2b8);
    local_1b0 = &local_238;
    local_2b8 = (undefined8 *)CONCAT44(uRam0000000141dc6be4,_DAT_141dc6be0);
    uStack_2b0 = (char *)CONCAT44(uRam0000000141dc6bec,uRam0000000141dc6be8);
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2b8);
    local_1a8 = &local_228;
    local_1a0 = &local_138;
    local_198 = &local_148;
    uVar4 = CONCAT44(uVar3,DAT_141a04758);
    FUN_140e634e0(param_1,param_2,&local_2c8,5,uVar4,&local_1b8);
    uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
    local_258 = 0x1a;
    FUN_140ec7870();
    local_258 = 0x1b;
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2b8 = (undefined8 *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
  uStack_2b0 = (char *)CONCAT44(uRam00000001419df7cc,uRam00000001419df7c8);
  local_2bc = 5;
  local_2c0 = 0;
  local_2c8 = 0;
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_2b8);
  local_1b8 = &local_248;
  FUN_140e634e0(param_1,param_2,&local_2c8,1,CONCAT44(uVar3,DAT_1419f5148),&local_1b8);
  local_258 = 0x28;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_10c = 0;
  local_118 = 1.0;
  local_258 = 0x29;
  FUN_140e87170(&local_158,DAT_1419fe0e8,0x80000000,&local_a8,param_1,param_2);
  local_2b8 = (undefined8 *)local_a8;
  uStack_2b0 = (char *)CONCAT44(uStack_9c,uStack_a0);
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  FUN_140041b80(&local_e8,&local_2b8);
  local_258 = 0x2a;
  FUN_140e87170(&local_158,DAT_1419fe158,0x80000000,&local_b8,param_1,param_2);
  local_2b8 = (undefined8 *)local_b8;
  uStack_2b0 = (char *)CONCAT44(uStack_ac,uStack_b0);
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  FUN_140041b80(&local_f8,&local_2b8);
  local_258 = 0x2c;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  pdVar12 = (double *)(**(code **)(*param_1 + 8))(param_1,DAT_141a15e38);
  uStack_27c = 0xf;
  local_288 = 7.29112897291228e-304;
  local_2b8 = (undefined8 *)0x10000010000002e;
  uStack_2b0 = (char *)CONCAT44(0xf,uStack_280);
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_2b8);
  local_1b8 = &local_248;
  if (pdVar12 != &local_238) {
    local_2b8 = (undefined8 *)*pdVar12;
    uStack_2b0 = (char *)pdVar12[1];
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2b8);
  }
  local_1b0 = &local_238;
  local_2b8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_2b0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  FUN_140041b80(&local_228,&local_2b8);
  local_1a8 = &local_228;
  ppdVar18 = &local_1b8;
  gml_Script_pal_swap_layer_init(param_1,param_2,&local_2c8,3,ppdVar18);
  uVar3 = (undefined4)((ulonglong)ppdVar18 >> 0x20);
  local_258 = 0x2d;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  local_2b8 = (undefined8 *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_2b0 = (char *)CONCAT44(uRam00000001419df7ac,uRam00000001419df7a8);
  if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  FUN_140041b80(&local_248,&local_2b8);
  local_1b8 = &local_248;
  uVar4 = CONCAT44(uVar3,DAT_141a07438);
  FUN_140e634e0(param_1,param_2,&local_2c8,1,uVar4,&local_1b8);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  local_258 = 0x2e;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c8 = 0;
  local_2c0 = 0;
  local_2bc = 5;
  if (pdVar10 != &local_248) {
    local_2b8 = (undefined8 *)*pdVar10;
    uStack_2b0 = (char *)pdVar10[1];
    if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    FUN_140041b80(&local_248,&local_2b8);
  }
  local_1b8 = &local_248;
  local_1b0 = &local_e8;
  local_1a8 = &local_f8;
  local_1a0 = &local_118;
  local_198 = &local_118;
  local_2b8 = (undefined8 *)CONCAT44(uRam0000000141dc6be4,_DAT_141dc6be0);
  uStack_2b0 = (char *)CONCAT44(uRam0000000141dc6bec,uRam0000000141dc6be8);
  if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2b8);
  local_2b8 = (undefined8 *)CONCAT44(uRam00000001419e9464,_DAT_1419e9460);
  uStack_2b0 = (char *)CONCAT44(uRam00000001419e946c,uRam00000001419e9468);
  local_190 = local_1f8;
  if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_2b8);
  local_188 = local_1e8;
  local_2b8 = (undefined8 *)CONCAT44(uRam00000001419e9454,_DAT_1419e9450);
  uStack_2b0 = (char *)CONCAT44(uRam00000001419e945c,uRam00000001419e9458);
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2b8);
  local_180 = local_1d8;
  ppdVar18 = &local_1b8;
  uVar16 = CONCAT44(uVar3,DAT_141a04498);
  FUN_140e634e0(param_1,param_2,&local_2c8,8,uVar16,ppdVar18);
  local_258 = 0x2f;
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  local_2c0 = 0;
  uStack_2b0 = "gml_Script_pal_swap_reset";
  local_2b8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_2b8;
  local_2bc = 5;
  local_2c8 = 0;
  local_2a8 = 0x71;
  iVar2 = FUN_140ec9d80();
  if (iVar2 != -1) {
    local_2a8 = 0x71;
    FUN_140ec9dc0();
  }
  DAT_141dc7a50 = local_2b8;
  local_258 = 0x31;
  (**(code **)(*param_1 + 8))(param_1,DAT_141a15ac8);
  FUN_140e87440(uVar8,DAT_141a1d930,0x80000000,&local_c8,uVar16 & 0xffffffffffffff00,
                (ulonglong)ppdVar18 & 0xffffffffffffff00);
  iVar2 = FUN_140e851f0(uVar7,&local_c8,DAT_141955260,0);
  if (iVar2 == 0) {
    local_258 = 0x35;
    plVar13 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a15e38);
    FUN_140162c50(plVar13,0x3fa1111111111111);
    local_258 = 0x36;
    if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2c8);
    }
    local_2c8 = 0;
    local_2c0 = 0;
    local_2bc = 5;
    if (pdVar12 != &local_248) {
      local_2b8 = (undefined8 *)*pdVar12;
      uStack_2b0 = (char *)pdVar12[1];
      if ((1 << (local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      FUN_140041b80(&local_248,&local_2b8);
    }
    local_1b8 = &local_248;
    local_2b8 = (undefined8 *)CONCAT44(uRam0000000141dc6be4,_DAT_141dc6be0);
    uStack_2b0 = (char *)CONCAT44(uRam0000000141dc6bec,uRam0000000141dc6be8);
    if ((1 << (local_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    FUN_140041b80(&local_238,&local_2b8);
    local_1b0 = &local_238;
    local_2b8 = (undefined8 *)CONCAT44(uRam00000001419e9474,_DAT_1419e9470);
    uStack_2b0 = (char *)CONCAT44(uRam00000001419e947c,uRam00000001419e9478);
    if ((1 << (local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_2b8);
    local_1a8 = &local_228;
    FUN_140e609c0(param_1);
    plVar14 = (longlong *)gml_RoomCC_rmGravePit01_0_Create(param_1,param_2,&local_2c8,3,&local_1b8);
    if (plVar14 != plVar13) {
      local_2b8 = (undefined8 *)*plVar14;
      uStack_2b0 = (char *)plVar14[1];
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar13 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar13);
      }
      FUN_140041b80(plVar13,&local_2b8);
    }
    FUN_140e60910(1);
  }
  else {
    local_258 = 0x32;
    puVar9 = (undefined8 *)(**(code **)(*param_1 + 0x10))();
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0;
    local_258 = 0x33;
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2c8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  _eh_vector_destructor_iterator_(&local_248,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_268;
  return;
}

