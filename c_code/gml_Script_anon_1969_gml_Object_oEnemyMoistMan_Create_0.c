// gml_Script_anon_1969_gml_Object_oEnemyMoistMan_Create_0 @ 0x1409db0a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_1969_gml_Object_oEnemyMoistMan_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  double *pdVar5;
  undefined8 *puVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  longlong *local_res8;
  undefined8 local_res10;
  undefined4 uVar12;
  ulonglong uVar11;
  undefined1 **ppuVar13;
  ulonglong uVar14;
  double local_2c8;
  uint local_2bc;
  double local_2b8;
  uint local_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  longlong *local_298;
  undefined4 local_28c;
  undefined8 local_288;
  undefined4 local_280;
  undefined4 local_27c;
  undefined8 local_278;
  char *local_270;
  undefined4 local_268;
  undefined8 local_260;
  undefined4 local_254;
  undefined8 local_250;
  undefined4 local_244;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [12];
  byte local_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  longlong *local_188;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_16c;
  undefined1 *local_168;
  undefined1 *local_160;
  undefined1 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined8 *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  longlong local_f8;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  local_270 = "gml_Script_anon@128@gml_Object_oEnemyMoistMan_Create_0";
  local_278 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_278;
  local_268 = 7;
  uVar12 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_218,0x10,6,FUN_1400424d0,FUN_140041b30);
  uStack_18c = 0xffffff;
  local_198 = 0;
  uStack_19c = 0xffffff;
  local_1a8 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_21c = 0xffffff;
  local_228 = 0;
  local_244 = 0xffffff;
  local_250 = 0;
  local_254 = 0xffffff;
  local_260 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0.0;
  local_2bc = 0xffffff;
  local_2c8 = 0.0;
  local_27c = 0;
  local_288 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  iVar7 = 8;
  local_268 = 8;
  uStack_22c = 0xf;
  local_238 = 0x100000200000105;
  local_2a8 = 0x100000200000105;
  uStack_2a0 = uStack_230;
  uStack_29c = 0xf;
  if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_2a8);
  local_168 = local_218;
  local_2a8 = CONCAT44(uRam00000001419eab44,_DAT_1419eab40);
  uStack_2a0 = uRam00000001419eab48;
  uStack_29c = uRam00000001419eab4c;
  if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_2a8);
  local_160 = local_208;
  local_2a8 = CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
  uStack_2a0 = uRam00000001419df7a8;
  uStack_29c = uRam00000001419df7ac;
  if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2a8);
  local_2a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2a0 = DAT_1419df7b8;
  uStack_29c = DAT_1419df7bc;
  local_158 = local_1f8;
  if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_2a8);
  local_150 = local_1e8;
  local_2a8 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_2a0 = DAT_1419df7b8;
  uStack_29c = DAT_1419df7bc;
  if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_2a8);
  local_148 = local_1d8;
  local_1c8 = FUN_140e794b0(0xcccccccd,0x3ff4000000000000);
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1bc = 0;
  local_140 = &local_1c8;
  ppuVar13 = &local_168;
  uVar11 = CONCAT44(uVar12,DAT_141a0a2e8);
  FUN_140e634e0(local_res8,local_res10,&local_288,6,uVar11,ppuVar13);
  local_268 = 10;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  local_28c = 6;
  local_298 = local_res8;
  uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_1419fe0e8,0x80000000,&local_198,uVar11,uVar14);
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_28c = 6;
  local_298 = local_res8;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_1419fe158,0x80000000,&local_1a8,uVar11,uVar14);
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_28c = 6;
  local_298 = local_res8;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_141a1b910,0x80000000,&local_1b8,uVar11,uVar14 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_2a8 = local_198;
  uStack_2a0 = uStack_190;
  uStack_29c = uStack_18c;
  if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_2a8);
  local_168 = local_218;
  local_2a8 = local_1a8;
  uStack_2a0 = uStack_1a0;
  uStack_29c = uStack_19c;
  if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_2a8);
  local_160 = local_208;
  local_2a8 = local_1b8;
  uStack_2a0 = uStack_1b0;
  uStack_29c = uStack_1ac;
  if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2a8);
  uStack_22c = 0xf;
  local_238 = 0x100000000000023;
  local_2a8 = 0x100000000000023;
  uStack_2a0 = uStack_230;
  uStack_29c = 0xf;
  local_158 = local_1f8;
  if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_2a8);
  local_150 = local_1e8;
  ppuVar13 = &local_168;
  uVar11 = CONCAT44(uVar12,DAT_141a0a7c8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_288,4,uVar11,ppuVar13);
  iVar2 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_268 = 0xc;
      uStack_22c = 0xf;
      local_238 = 0x1000001000001c7;
      local_2a8 = 0x1000001000001c7;
      uStack_2a0 = uStack_230;
      uStack_29c = 0xf;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2a8);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_228);
      local_268 = 0xd;
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      local_244 = 0;
      local_250 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_250);
      local_268 = 0xe;
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_260);
      }
      local_254 = 0;
      local_260 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_260);
      local_268 = 0xf;
      dVar9 = (double)FUN_140e794b0(0,0x405f400000000000);
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_2ac = 0;
      local_268 = 0x10;
      local_2b8 = dVar9;
      dVar9 = (double)FUN_140e794b0(0,0x4018000000000000);
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2bc = 0;
      local_268 = 0x11;
      local_2c8 = dVar9;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar9 = local_2b8;
      if ((local_2ac & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_2b8);
      }
      dVar10 = local_2c8;
      if ((local_2bc & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2c8);
      }
      fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar8;
      local_268 = 0x12;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar9 = local_2b8;
      if ((local_2ac & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_2b8);
      }
      dVar10 = local_2c8;
      if ((local_2bc & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2c8);
      }
      fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar8;
      cVar1 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_e8,&local_res8,&local_res10);
  local_268 = 0x15;
  if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_288 = 0;
  local_280 = 0;
  local_27c = 5;
  local_28c = 6;
  local_298 = local_res8;
  uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_1419fe0e8,0x80000000,&local_198,uVar11,uVar14);
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_28c = 6;
  local_298 = local_res8;
  uVar14 = uVar14 & 0xffffffffffffff00;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_1419fe158,0x80000000,&local_1a8,uVar11,uVar14);
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_28c = 6;
  local_298 = local_res8;
  uVar11 = uVar11 & 0xffffffffffffff00;
  FUN_140e87440(&local_298,DAT_141a1b910,0x80000000,&local_1b8,uVar11,uVar14 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar11 >> 0x20);
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  local_2a8 = local_198;
  uStack_2a0 = uStack_190;
  uStack_29c = uStack_18c;
  if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_218);
  }
  FUN_140041b80(local_218,&local_2a8);
  local_168 = local_218;
  local_2a8 = local_1a8;
  uStack_2a0 = uStack_1a0;
  uStack_29c = uStack_19c;
  if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_208);
  }
  FUN_140041b80(local_208,&local_2a8);
  local_160 = local_208;
  local_2a8 = local_1b8;
  uStack_2a0 = uStack_1b0;
  uStack_29c = uStack_1ac;
  if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1f8);
  }
  FUN_140041b80(local_1f8,&local_2a8);
  uStack_22c = 0xf;
  local_238 = 0x100000000000023;
  local_2a8 = 0x100000000000023;
  uStack_2a0 = uStack_230;
  uStack_29c = 0xf;
  local_158 = local_1f8;
  if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1e8);
  }
  FUN_140041b80(local_1e8,&local_2a8);
  local_150 = local_1e8;
  ppuVar13 = &local_168;
  uVar11 = CONCAT44(uVar12,DAT_141a0a7c8);
  uVar4 = FUN_140e634e0(local_res8,local_res10,&local_288,4,uVar11,ppuVar13);
  iVar2 = FUN_140e63cb0(local_108,&local_res8,&local_res10,uVar4);
  if (0 < iVar2) {
    do {
      local_268 = 0x17;
      uStack_22c = 0xf;
      local_238 = 0x1000001000001c7;
      local_2a8 = 0x1000001000001c7;
      uStack_2a0 = uStack_230;
      uStack_29c = 0xf;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_2a8);
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_228);
      local_268 = 0x18;
      if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_250);
      }
      local_244 = 0;
      local_250 = 0;
      FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_250);
      local_268 = 0x19;
      if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_260);
      }
      local_254 = 0;
      local_260 = 0x4000000000000000;
      FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_260);
      local_268 = 0x1a;
      dVar9 = (double)FUN_140e794b0(0,0x405f400000000000);
      if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_2ac = 0;
      local_268 = 0x1b;
      local_2b8 = dVar9;
      dVar9 = (double)FUN_140e794b0(0,0x4018000000000000);
      if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2c8);
      }
      local_2bc = 0;
      local_268 = 0x1c;
      local_2c8 = dVar9;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
      dVar9 = local_2b8;
      if ((local_2ac & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_2b8);
      }
      dVar10 = local_2c8;
      if ((local_2bc & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2c8);
      }
      fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar8;
      local_268 = 0x1d;
      pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
      dVar9 = local_2b8;
      if ((local_2ac & 0xffffff) != 0) {
        dVar9 = (double)FUN_140e4b060(&local_2b8);
      }
      dVar10 = local_2c8;
      if ((local_2bc & 0xffffff) != 0) {
        dVar10 = (double)FUN_140e4b060(&local_2c8);
      }
      fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
      if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(pdVar5);
      }
      *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
      *pdVar5 = (double)fVar8;
      cVar1 = FUN_140e643f0(local_108,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_108,&local_res8,&local_res10);
  iVar2 = 2;
  do {
    iVar2 = iVar2 + -1;
    local_268 = 0x21;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    local_28c = 6;
    local_298 = local_res8;
    uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_298,DAT_1419fe0e8,0x80000000,&local_198,uVar11,uVar14);
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_17c = 6;
    local_188 = local_res8;
    uVar14 = uVar14 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_1a8,uVar11,uVar14);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_16c = 6;
    local_178 = local_res8;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_141a1b910,0x80000000,&local_1b8,uVar11,uVar14 & 0xffffffffffffff00)
    ;
    uVar12 = (undefined4)(uVar11 >> 0x20);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_2a8 = local_198;
    uStack_2a0 = uStack_190;
    uStack_29c = uStack_18c;
    if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2a8);
    local_168 = local_218;
    local_2a8 = local_1a8;
    uStack_2a0 = uStack_1a0;
    uStack_29c = uStack_19c;
    if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2a8);
    local_160 = local_208;
    local_2a8 = local_1b8;
    uStack_2a0 = uStack_1b0;
    uStack_29c = uStack_1ac;
    if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2a8);
    uStack_22c = 0xf;
    local_238 = 0x100000000000023;
    local_2a8 = 0x100000000000023;
    uStack_2a0 = uStack_230;
    uStack_29c = 0xf;
    local_158 = local_1f8;
    if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2a8);
    local_150 = local_1e8;
    ppuVar13 = &local_168;
    uVar11 = CONCAT44(uVar12,DAT_141a0a7c8);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_288,4,uVar11,ppuVar13);
    iVar3 = FUN_140e63cb0(&local_138,&local_res8,&local_res10,uVar4);
    if (0 < iVar3) {
      do {
        local_268 = 0x23;
        uStack_10c = 0xf;
        local_118 = 0x1000001000001c7;
        local_2a8 = 0x1000001000001c7;
        uStack_2a0 = uStack_110;
        uStack_29c = 0xf;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_2a8);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_228);
        local_268 = 0x24;
        if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_250);
        }
        local_244 = 0;
        local_250 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_250);
        local_268 = 0x25;
        if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_260);
        }
        local_254 = 0;
        local_260 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_260);
        local_268 = 0x26;
        dVar9 = (double)FUN_140e794b0(0,0x405f400000000000);
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_2ac = 0;
        local_268 = 0x27;
        local_2b8 = dVar9;
        dVar9 = (double)FUN_140e794b0(0,0x4018000000000000);
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2bc = 0;
        local_268 = 0x28;
        local_2c8 = dVar9;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar9 = local_2b8;
        if ((local_2ac & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_2b8);
        }
        dVar10 = local_2c8;
        if ((local_2bc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2c8);
        }
        fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar8;
        local_268 = 0x29;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar9 = local_2b8;
        if ((local_2ac & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_2b8);
        }
        dVar10 = local_2c8;
        if ((local_2bc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2c8);
        }
        fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar8;
        cVar1 = FUN_140e643f0(&local_138,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(&local_138,&local_res8,&local_res10);
    if (local_128 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar2);
  do {
    iVar7 = iVar7 + -1;
    local_268 = 0x2e;
    if ((1 << ((byte)local_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    local_288 = 0;
    local_280 = 0;
    local_27c = 5;
    local_16c = 6;
    local_178 = local_res8;
    uVar14 = (ulonglong)ppuVar13 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_1419fe0e8,0x80000000,&local_198,uVar11,uVar14);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_17c = 6;
    local_188 = local_res8;
    uVar14 = uVar14 & 0xffffffffffffff00;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_1a8,uVar11,uVar14);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_28c = 6;
    local_298 = local_res8;
    uVar11 = uVar11 & 0xffffffffffffff00;
    FUN_140e87440(&local_298,DAT_141a1b910,0x80000000,&local_1b8,uVar11,uVar14 & 0xffffffffffffff00)
    ;
    uVar12 = (undefined4)(uVar11 >> 0x20);
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_138 = (undefined4)local_198;
    uStack_134 = local_198._4_4_;
    uStack_130 = uStack_190;
    uStack_12c = uStack_18c;
    if ((1 << (local_218[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_138);
    local_168 = local_218;
    local_138 = (undefined4)local_1a8;
    uStack_134 = local_1a8._4_4_;
    uStack_130 = uStack_1a0;
    uStack_12c = uStack_19c;
    if ((1 << (local_208[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_138);
    local_160 = local_208;
    local_138 = (undefined4)local_1b8;
    uStack_134 = local_1b8._4_4_;
    uStack_130 = uStack_1b0;
    uStack_12c = uStack_1ac;
    if ((1 << (local_1f8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_138);
    uStack_10c = 0xf;
    local_118 = 0x100000000000023;
    local_138 = 0x23;
    uStack_134 = 0x1000000;
    uStack_130 = uStack_110;
    uStack_12c = 0xf;
    local_158 = local_1f8;
    if ((1 << (local_1e8[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_138);
    local_150 = local_1e8;
    ppuVar13 = &local_168;
    uVar11 = CONCAT44(uVar12,DAT_141a0a7c8);
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_288,4,uVar11,ppuVar13);
    iVar2 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar4);
    if (0 < iVar2) {
      do {
        local_268 = 0x30;
        uStack_29c = 0xf;
        local_2a8 = 0x10000010000014c;
        local_138 = 0x14c;
        uStack_134 = 0x1000001;
        uStack_130 = uStack_2a0;
        uStack_12c = 0xf;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        FUN_140041b80(&local_228,&local_138);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_228);
        local_268 = 0x31;
        if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_250);
        }
        local_244 = 0;
        local_250 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_250);
        local_268 = 0x32;
        uVar4 = FUN_140e78f00(2);
        if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_260);
        }
        local_254 = 0;
        local_260 = uVar4;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_260);
        local_268 = 0x33;
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04c38);
        uStack_22c = 0xd;
        local_238 = 0x3ff0000000000000;
        if (&local_238 != puVar6) {
          local_138 = 0;
          uStack_134 = 0x3ff00000;
          uStack_130 = uStack_230;
          uStack_12c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_138);
        }
        local_268 = 0x34;
        dVar9 = (double)FUN_140e794b0(0,0x405f400000000000);
        if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2b8);
        }
        local_2ac = 0;
        local_268 = 0x35;
        local_2b8 = dVar9;
        dVar9 = (double)FUN_140e794b0(0,0x4018000000000000);
        if ((1 << ((byte)local_2bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_2c8);
        }
        local_2bc = 0;
        local_268 = 0x36;
        local_2c8 = dVar9;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar9 = local_2b8;
        if ((local_2ac & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_2b8);
        }
        dVar10 = local_2c8;
        if ((local_2bc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2c8);
        }
        fVar8 = (float)FUN_140e78f90((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar8;
        local_268 = 0x37;
        pdVar5 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar9 = local_2b8;
        if ((local_2ac & 0xffffff) != 0) {
          dVar9 = (double)FUN_140e4b060(&local_2b8);
        }
        dVar10 = local_2c8;
        if ((local_2bc & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_2c8);
        }
        fVar8 = (float)FUN_140e79010((float)dVar10,(float)dVar9);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar5);
        }
        *(undefined4 *)((longlong)pdVar5 + 0xc) = 0;
        *pdVar5 = (double)fVar8;
        cVar1 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_c8,&local_res8,&local_res10);
    if (local_b8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar7);
  if (local_f8 != 0) {
    FUN_140e4cd60();
    local_f8 = 0;
  }
  if (local_d8 != 0) {
    FUN_140e4cd60();
    local_d8 = 0;
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
  if ((1 << ((byte)local_254 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_260);
  }
  if ((1 << ((byte)local_244 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_250);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)uStack_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  _eh_vector_destructor_iterator_(local_218,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_278;
  return param_3;
}

