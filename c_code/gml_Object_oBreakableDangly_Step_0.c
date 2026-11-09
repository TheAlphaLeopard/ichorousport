// gml_Object_oBreakableDangly_Step_0 @ 0x140854c50

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Object_oBreakableDangly_Step_0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  double *pdVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  longlong *local_res8;
  longlong *local_res10;
  undefined8 *local_res18;
  undefined4 uVar14;
  undefined1 **ppuVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined8 local_2b8;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined8 local_298;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  double local_278;
  uint local_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  undefined8 local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  char *local_230;
  undefined4 local_228;
  undefined8 local_220;
  undefined4 local_218;
  undefined4 local_214;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  undefined8 local_138 [2];
  undefined8 local_128 [2];
  undefined1 local_118 [12];
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined4 local_f8 [4];
  undefined1 local_e8 [16];
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined4 *local_b8;
  undefined1 *local_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  
  uVar16 = 0;
  local_230 = "gml_Script_anon@1293@gml_Object_oBreakableDangly_Create_0";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 0x3c;
  uVar14 = 1;
  local_res8 = param_1;
  local_res10 = param_2;
  local_res18 = param_3;
  _eh_vector_constructor_iterator_(local_138,0x10,6,FUN_1400424d0,FUN_140041b30);
  local_26c = 0xffffff;
  local_278 = 0.0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_214 = 0xffffff;
  local_220 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_29c = 0;
  local_2a8 = 0;
  local_1e4 = 0;
  local_1f0 = 0;
  local_1f4 = 0;
  local_200 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 0x3e;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a388);
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a158);
  if (puVar4 != local_138) {
    local_268 = *puVar4;
    uStack_260 = *(undefined4 *)(puVar4 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_268);
  }
  local_d8 = local_138;
  uVar7 = CONCAT44(uVar14,DAT_141a047c8);
  puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2a8,1,uVar7,&local_d8,uVar16);
  uStack_2ac = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_2b0 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
    local_2b8 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_2b8,puVar4);
  }
  local_24c = 0;
  local_258 = 0x4000000000000000;
  FUN_140046500(&local_2b8,&local_258);
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  uStack_28c = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_290 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
    local_298 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_298,puVar3);
  }
  FUN_1400460e0(&local_298,&local_2b8);
  local_268 = local_298;
  uStack_260 = uStack_290;
  uStack_25c = uStack_28c;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  FUN_140041b80(&local_278,&local_268);
  if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_228 = 0x3f;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a368);
  pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar5;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar5);
  }
  dVar13 = local_278;
  if ((local_26c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_278);
  }
  fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
  uStack_2ac = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_2b0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
    local_2b8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_2b8,puVar3);
  }
  FUN_140162c50(&local_2b8,(double)fVar11);
  local_268 = local_2b8;
  uStack_260 = uStack_2b0;
  uStack_25c = uStack_2ac;
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  FUN_140041b80(&local_168,&local_268);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_228 = 0x40;
  puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a398);
  if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
    dVar12 = *pdVar5;
  }
  else {
    dVar12 = (double)FUN_140e4b060(pdVar5);
  }
  dVar13 = local_278;
  if ((local_26c & 0xffffff) != 0) {
    dVar13 = (double)FUN_140e4b060(&local_278);
  }
  fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
  uStack_2ac = *(undefined4 *)((longlong)puVar3 + 0xc);
  uStack_2b0 = *(undefined4 *)(puVar3 + 1);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
    local_2b8 = *puVar3;
  }
  else {
    FUN_1400419b0(&local_2b8,puVar3);
  }
  FUN_140162c50(&local_2b8,(double)fVar11);
  local_268 = local_2b8;
  uStack_260 = uStack_2b0;
  uStack_25c = uStack_2ac;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  FUN_140041b80(&local_178,&local_268);
  if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_228 = 0x42;
  dVar12 = (double)FUN_140e78f40(4);
  uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
  iVar10 = (int)dVar12;
  if (0 < iVar10) {
    do {
      uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
      iVar10 = iVar10 + -1;
      local_228 = 0x44;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a388);
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
      uVar7 = FUN_140e78f40(0xfffffffffffffff4);
      uStack_2ac = *(undefined4 *)((longlong)puVar3 + 0xc);
      uStack_2b0 = *(undefined4 *)(puVar3 + 1);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
        local_2b8 = *puVar3;
      }
      else {
        FUN_1400419b0(&local_2b8,puVar3);
      }
      local_24c = 0;
      local_258 = uVar7;
      FUN_1400462a0(&local_2b8,&local_258);
      if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      local_288 = (undefined1 *)local_2b8;
      uStack_280 = uStack_2b0;
      uStack_27c = uStack_2ac;
      if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_278);
      }
      FUN_140041b80(&local_278,&local_288);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      local_228 = 0x45;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a368);
      pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar5;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar5);
      }
      dVar13 = local_278;
      if ((local_26c & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_278);
      }
      fVar11 = (float)FUN_140e78f90((float)dVar13,(float)dVar12);
      uStack_28c = *(undefined4 *)((longlong)puVar3 + 0xc);
      uStack_290 = *(undefined4 *)(puVar3 + 1);
      if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) == 0) {
        local_298 = *puVar3;
      }
      else {
        FUN_1400419b0(&local_298,puVar3);
      }
      FUN_140162c50(&local_298,(double)fVar11);
      local_288 = (undefined1 *)local_298;
      uStack_280 = uStack_290;
      uStack_27c = uStack_28c;
      if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_288);
      if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_228 = 0x46;
      pdVar5 = (double *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a7f8);
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a398);
      if ((*(uint *)((longlong)pdVar5 + 0xc) & 0xffffff) == 0) {
        dVar12 = *pdVar5;
      }
      else {
        dVar12 = (double)FUN_140e4b060(pdVar5);
      }
      dVar13 = local_278;
      if ((local_26c & 0xffffff) != 0) {
        dVar13 = (double)FUN_140e4b060(&local_278);
      }
      fVar11 = (float)FUN_140e79010((float)dVar13,(float)dVar12);
      uStack_23c = *(undefined4 *)((longlong)puVar3 + 0xc);
      uStack_240 = *(undefined4 *)(puVar3 + 1);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
        local_248 = *puVar3;
      }
      else {
        FUN_1400419b0(&local_248,puVar3);
      }
      FUN_140162c50(&local_248,(double)fVar11);
      local_288 = (undefined1 *)local_248;
      uStack_280 = uStack_240;
      uStack_27c = uStack_23c;
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_288);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_228 = 0x48;
      if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      local_2a8 = 0;
      local_2a0 = 0;
      local_29c = 5;
      local_d8 = &local_188;
      local_d0 = &local_198;
      local_288 = (undefined1 *)CONCAT44(uRam0000000141dd705c,_DAT_141dd7058);
      uStack_280 = uRam0000000141dd7060;
      uStack_27c = DAT_141dd7064;
      if ((1 << ((byte)_local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_118);
      }
      FUN_140041b80(local_118,&local_288);
      local_c8 = local_118;
      uStack_25c = 0xf;
      local_268 = 0x100000000000041;
      local_288 = (undefined1 *)0x100000000000041;
      uStack_280 = uStack_260;
      uStack_27c = 0xf;
      if ((1 << ((byte)_local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_288);
      local_c0 = local_108;
      uVar7 = CONCAT44(uVar14,DAT_141a0a7c8);
      uVar6 = FUN_140e634e0(local_res8,local_res10,&local_2a8,4,uVar7,&local_d8);
      iVar2 = FUN_140e63cb0(&local_158,&local_res8,&local_res10,uVar6);
      if (0 < iVar2) {
        do {
          local_228 = 0x4a;
          puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
          uVar6 = FUN_140e794b0(0,0x3ff0000000000000);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          *puVar3 = uVar6;
          local_228 = 0x4b;
          puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
          uVar6 = FUN_140e794b0(0,0x3ff0000000000000);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar3);
          }
          *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
          *puVar3 = uVar6;
          local_228 = 0x4c;
          uStack_1cc = 0xf;
          local_1d8 = 0x1000001000000b4;
          local_288 = (undefined1 *)0x1000001000000b4;
          uStack_280 = uStack_1d0;
          uStack_27c = 0xf;
          if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_210);
          }
          FUN_140041b80(&local_210,&local_288);
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_210);
          local_228 = 0x4d;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1ac = 0;
          local_1b8 = 0;
          FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_1b8);
          local_228 = 0x4e;
          if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2a8);
          }
          local_2a8 = 0;
          local_2a0 = 0;
          local_29c = 5;
          local_288 = (undefined1 *)CONCAT44(uRam0000000141dc6aa4,_DAT_141dc6aa0);
          uStack_280 = uRam0000000141dc6aa8;
          uStack_27c = uRam0000000141dc6aac;
          if ((1 << ((byte)local_138[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_138);
          }
          FUN_140041b80(local_138,&local_288);
          local_d8 = local_138;
          local_288 = (undefined1 *)CONCAT44(uRam00000001419e8fc4,_DAT_1419e8fc0);
          uStack_280 = uRam00000001419e8fc8;
          uStack_27c = uRam00000001419e8fcc;
          if ((1 << ((byte)local_128[1]._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_128);
          }
          FUN_140041b80(local_128,&local_288);
          local_d0 = local_128;
          puVar3 = (undefined8 *)FUN_140e78db0(&local_2a8,2,&local_d8);
          if (puVar3 != &local_1c8) {
            local_288 = (undefined1 *)*puVar3;
            uStack_280 = *(undefined4 *)(puVar3 + 1);
            uStack_27c = *(undefined4 *)((longlong)puVar3 + 0xc);
            if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1c8);
            }
            FUN_140041b80(&local_1c8,&local_288);
          }
          FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_1c8);
          cVar1 = FUN_140e643f0(&local_158,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(&local_158,&local_res8,&local_res10);
      if (local_148 != 0) {
        FUN_140e4cd60();
      }
      uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
    } while (0 < iVar10);
    param_3 = local_res18;
  }
  uVar9 = 0;
  local_228 = 0x54;
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  local_2a8 = 0;
  local_2a0 = 0;
  local_29c = 5;
  local_d8 = &local_168;
  local_d0 = &local_178;
  local_268 = CONCAT44(uRam0000000141dd705c,_DAT_141dd7058);
  uStack_260 = uRam0000000141dd7060;
  uStack_25c = DAT_141dd7064;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_268);
  local_c8 = local_118;
  uStack_25c = 0xf;
  local_268 = 0x100000000000037;
  local_1d8 = 0x100000000000037;
  uStack_1d0 = uStack_260;
  uStack_1cc = 0xf;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_108);
  }
  FUN_140041b80(local_108,&local_1d8);
  local_c0 = local_108;
  uVar6 = CONCAT44(uVar14,DAT_141a0a7c8);
  uVar7 = FUN_140e634e0(local_res8,local_res10,&local_2a8,4,uVar6,&local_d8);
  iVar10 = FUN_140e63cb0(local_a8,&local_res8,&local_res10,uVar7);
  if (0 < iVar10) {
    do {
      uVar14 = (undefined4)((ulonglong)uVar6 >> 0x20);
      (**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a158);
      local_228 = 0x56;
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
      puVar8 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a0a158);
      if (puVar8 != local_f8) {
        local_158 = *puVar8;
        uStack_154 = puVar8[1];
        uStack_150 = puVar8[2];
        uStack_14c = puVar8[3];
        if ((1 << ((byte)local_f8[3] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_158);
      }
      local_b8 = local_f8;
      uStack_28c = DAT_141dd7054;
      uStack_290 = DAT_141dd7050;
      if ((1 << ((byte)DAT_141dd7054 & 0x1f) & 0x46U) == 0) {
        local_298 = DAT_141dd7048;
      }
      else {
        FUN_1400419b0(&local_298,&DAT_141dd7048);
      }
      uVar7 = CONCAT44(uVar14,DAT_141a089e8);
      puVar3 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_200,1,uVar7,&local_b8);
      uVar14 = (undefined4)((ulonglong)uVar7 >> 0x20);
      uStack_23c = *(undefined4 *)((longlong)puVar3 + 0xc);
      uStack_240 = *(undefined4 *)(puVar3 + 1);
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) == 0) {
        local_248 = *puVar3;
      }
      else {
        FUN_1400419b0(&local_248,puVar3);
      }
      FUN_1400460e0(&local_248,&local_298);
      local_158 = (undefined4)local_248;
      uStack_154 = local_248._4_4_;
      uStack_150 = uStack_240;
      uStack_14c = uStack_23c;
      if ((1 << (local_e8[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_e8);
      }
      FUN_140041b80(local_e8,&local_158);
      uVar17 = uVar9;
      if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      if ((1 << ((byte)uStack_28c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_298);
      }
      local_b0 = local_e8;
      ppuVar15 = &local_b0;
      uVar6 = CONCAT44(uVar14,DAT_141a086f8);
      puVar3 = (undefined8 *)
               FUN_140e634e0(local_res8,local_res10,&local_1f0,1,uVar6,ppuVar15,uVar17);
      if (puVar3 != &local_220) {
        local_158 = *(undefined4 *)puVar3;
        uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_150 = *(undefined4 *)(puVar3 + 1);
        uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_220);
        }
        FUN_140041b80(&local_220,&local_158);
      }
      local_228 = 0x57;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a158);
      uStack_27c = 0;
      local_288 = &DAT_bff0000000000000;
      iVar10 = FUN_140e851f0(&local_220,&local_288,DAT_141955260,0);
      if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_288);
      }
      if (iVar10 == 0) {
        uStack_1cc = 0xf;
        local_1d8 = 0x10000010000011b;
        puVar4 = &local_1d8;
        uVar9 = uVar9 | 1;
      }
      else {
        local_24c = local_214;
        local_250 = local_218;
        if ((1 << ((byte)local_214 & 0x1f) & 0x46U) == 0) {
          local_258 = local_220;
        }
        else {
          FUN_1400419b0(&local_258,&local_220);
        }
        puVar4 = &local_258;
        uVar9 = uVar9 | 2;
      }
      uVar17 = uVar9;
      FUN_140e609c0(local_res8);
      if (puVar4 != puVar3) {
        local_158 = *(undefined4 *)puVar4;
        uStack_154 = *(undefined4 *)((longlong)puVar4 + 4);
        uStack_150 = *(undefined4 *)(puVar4 + 1);
        uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        FUN_140041b80(puVar3,&local_158);
      }
      if (((uVar9 & 2) != 0) &&
         (uVar9 = uVar9 & 0xfffffffd, uVar17 = uVar9, (1 << ((byte)local_24c & 0x1f) & 0x46U) != 0))
      {
        FUN_140041a50(&local_258);
      }
      if (((uVar9 & 1) != 0) &&
         (uVar9 = uVar9 & 0xfffffffe, uVar17 = uVar9, (1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0)
         ) {
        FUN_140041a50(&local_1d8);
      }
      FUN_140e60910(1);
      local_228 = 0x58;
      puVar3 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a158);
      if (puVar3 != &local_210) {
        local_158 = *(undefined4 *)puVar3;
        uStack_154 = *(undefined4 *)((longlong)puVar3 + 4);
        uStack_150 = *(undefined4 *)(puVar3 + 1);
        uStack_14c = *(undefined4 *)((longlong)puVar3 + 0xc);
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        FUN_140041b80(&local_210,&local_158);
      }
      FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_210,uVar6,ppuVar15,uVar17);
      local_228 = 0x59;
      puVar3 = (undefined8 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a0a7f8);
      uStack_2ac = *(undefined4 *)((longlong)puVar3 + 0xc);
      uStack_2b0 = *(undefined4 *)(puVar3 + 1);
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) == 0) {
        local_2b8 = *puVar3;
      }
      else {
        FUN_1400419b0(&local_2b8,puVar3);
      }
      uStack_25c = 7;
      local_268 = CONCAT44(local_268._4_4_,0x10e);
      FUN_1400462a0(&local_2b8,&local_268);
      if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_158 = (undefined4)local_2b8;
      uStack_154 = local_2b8._4_4_;
      uStack_150 = uStack_2b0;
      uStack_14c = uStack_2ac;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_158);
      uVar17 = uVar9;
      if ((1 << ((byte)uStack_2ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2b8);
      }
      FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_1a8,uVar6,ppuVar15,uVar17);
      cVar1 = FUN_140e643f0(local_a8,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  FUN_140e63970(local_a8,&local_res8,&local_res10);
  if (local_98 != 0) {
    FUN_140e4cd60();
    local_98 = 0;
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,6,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}

