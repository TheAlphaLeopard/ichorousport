// gml_Object_oTumorProj_Step_0 @ 0x140de9af0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * gml_Object_oTumorProj_Step_0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  float fVar11;
  double dVar12;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  code *pcVar13;
  undefined1 **ppuVar14;
  ulonglong uVar15;
  ulonglong in_stack_fffffffffffffd70;
  ulonglong uVar16;
  longlong *local_288;
  undefined4 uStack_280;
  uint uStack_27c;
  undefined8 local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined4 uStack_260;
  undefined4 uStack_25c;
  double local_258;
  uint local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  double local_238;
  uint local_22c;
  undefined8 local_228;
  char *local_220;
  undefined4 local_218;
  undefined8 local_210;
  undefined4 local_204;
  undefined8 local_200;
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined1 local_1d8 [12];
  undefined4 local_1cc;
  undefined1 local_1c8 [12];
  undefined4 local_1bc;
  double local_1b8;
  undefined4 local_1ac;
  double local_1a8;
  byte local_19c;
  undefined8 local_198;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_17c;
  undefined1 local_178 [12];
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 local_12c;
  undefined1 *local_128;
  undefined1 *local_120;
  double *local_118;
  double *local_110;
  undefined8 *local_108;
  undefined8 *local_100;
  undefined1 *local_f8;
  longlong *local_f0;
  undefined4 local_e4;
  longlong *local_e0;
  undefined4 local_d4;
  longlong *local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined1 local_90 [16];
  longlong local_80;
  
  local_res18 = 0;
  local_220 = "gml_Script_anon@172@gml_Object_oTumorHemo_Create_0";
  local_228 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_228;
  local_218 = 0xb;
  pcVar13 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_1d8,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_12c = 0xffffff;
  local_138 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  uStack_15c = 0xffffff;
  local_168 = 0.0;
  local_22c = 0xffffff;
  local_238 = 0.0;
  local_24c = 0xffffff;
  local_258 = 0.0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_26c = 0;
  local_278 = 0;
  local_94 = 0;
  local_a0 = 0;
  local_a4 = 0;
  local_b0 = 0;
  local_b4 = 0;
  local_c0 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_218 = 0xc;
  FUN_140edd0e0(local_res8,local_res10,0,0);
  local_218 = 0xe;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  uStack_27c = 6;
  local_288 = local_res8;
  uVar9 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_141a0f7f8,0x80000000,&local_138,uVar9,
                in_stack_fffffffffffffd70 & 0xffffffffffffff00);
  uVar10 = (undefined4)(uVar9 >> 0x20);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  uStack_27c = 0;
  local_288 = (longlong *)0x404e000000000000;
  local_res18 = 1;
  FUN_140042560(&local_288,&local_138);
  local_268 = local_288;
  uStack_260 = uStack_280;
  uStack_25c = uStack_27c;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_268);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_128 = local_1d8;
  ppuVar14 = &local_128;
  uVar9 = CONCAT44(uVar10,DAT_1419fe728);
  puVar3 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_278,1,uVar9,ppuVar14);
  if (puVar3 != &local_1f0) {
    local_268 = (longlong *)*puVar3;
    uStack_260 = *(undefined4 *)(puVar3 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1f0);
    }
    FUN_140041b80(&local_1f0,&local_268);
  }
  local_218 = 0x10;
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  local_278 = 0;
  local_270 = 0;
  local_26c = 5;
  uStack_27c = 6;
  local_288 = local_res8;
  uVar16 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
  uVar9 = uVar9 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_1419fe0e8,0x80000000,&local_158,uVar9,uVar16);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  uStack_27c = 6;
  local_288 = local_res8;
  uVar16 = uVar16 & 0xffffffffffffff00;
  FUN_140e87440(&local_288,DAT_1419fe158,0x80000000,&local_168,uVar9 & 0xffffffffffffff00,uVar16);
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_268 = (longlong *)local_158;
  uStack_260 = uStack_150;
  uStack_25c = uStack_14c;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1d8);
  }
  FUN_140041b80(local_1d8,&local_268);
  local_128 = local_1d8;
  local_268 = (longlong *)local_168;
  uStack_260 = uStack_160;
  uStack_25c = uStack_15c;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_1c8);
  }
  FUN_140041b80(local_1c8,&local_268);
  local_120 = local_1c8;
  pdVar4 = (double *)FUN_140e8da20(&local_a0,local_res8,2,&DAT_141dc7940,&DAT_1419ee610);
  if (pdVar4 != &local_1b8) {
    local_268 = (longlong *)*pdVar4;
    uStack_260 = *(undefined4 *)(pdVar4 + 1);
    uStack_25c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_268);
  }
  local_118 = &local_1b8;
  pdVar4 = (double *)FUN_140e8da20(&local_b0,local_res8,2,&DAT_1419ee5f0,&DAT_1419ee630);
  if (pdVar4 != &local_1a8) {
    local_268 = (longlong *)*pdVar4;
    uStack_260 = *(undefined4 *)(pdVar4 + 1);
    uStack_25c = *(undefined4 *)((longlong)pdVar4 + 0xc);
    if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    FUN_140041b80(&local_1a8,&local_268);
  }
  local_110 = &local_1a8;
  local_108 = &local_1f0;
  puVar3 = (undefined8 *)FUN_140e8da20(&local_c0,local_res8,2,&DAT_1419ee620,&DAT_1419ee5e0);
  if (puVar3 != &local_188) {
    local_268 = (longlong *)*puVar3;
    uStack_260 = *(undefined4 *)(puVar3 + 1);
    uStack_25c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_268);
  }
  local_100 = &local_188;
  local_268 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_260 = DAT_1419df7b8;
  uStack_25c = DAT_1419df7bc;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_178);
  }
  FUN_140041b80(local_178,&local_268);
  local_f8 = local_178;
  ppuVar14 = &local_128;
  gml_Script_get_blood_col(local_res8,local_res10,&local_278,7,ppuVar14);
  local_218 = 0x12;
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_22c = 0;
  local_238 = 8.0;
  local_218 = 0x13;
  uStack_27c = 0;
  local_288 = (longlong *)0x4076800000000000;
  local_res18 = 0x20;
  FUN_140046500(&local_288,&local_238);
  if ((uStack_27c & 0xffffff) == 0) {
    uVar10 = SUB84(local_288,0);
  }
  else {
    uVar10 = FUN_140e4b060(&local_288);
  }
  dVar12 = (double)FUN_140e79480(uVar10);
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  local_24c = 0;
  local_258 = dVar12;
  if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_288);
  }
  local_218 = 0x14;
  dVar12 = local_238;
  if ((local_22c & 0xffffff) != 0) {
    dVar12 = (double)FUN_140e4b060(&local_238);
  }
  uVar9 = (ulonglong)dVar12;
  uVar8 = (uint)uVar9;
  while (0 < (int)uVar8) {
    uVar8 = (int)uVar9 - 1;
    uVar9 = (ulonglong)uVar8;
    local_218 = 0x16;
    if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_278);
    }
    local_278 = 0;
    local_270 = 0;
    local_26c = 5;
    local_e4 = 6;
    local_f0 = local_res8;
    uVar16 = uVar16 & 0xffffffffffffff00;
    uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_f0,DAT_1419fe0e8,0x80000000,&local_158,uVar15,uVar16);
    if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f0);
    }
    local_d4 = 6;
    local_e0 = local_res8;
    uVar16 = uVar16 & 0xffffffffffffff00;
    uVar15 = uVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_e0,DAT_1419fe158,0x80000000,&local_168,uVar15,uVar16);
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    local_c4 = 6;
    local_d0 = local_res8;
    uVar16 = uVar16 & 0xffffffffffffff00;
    FUN_140e87440(&local_d0,DAT_141a1b910,0x80000000,&local_148,uVar15 & 0xffffffffffffff00,uVar16);
    if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d0);
    }
    local_248 = (undefined4)local_158;
    uStack_244 = local_158._4_4_;
    uStack_240 = uStack_150;
    uStack_23c = uStack_14c;
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_248);
    local_128 = local_1d8;
    local_248 = (undefined4)local_168;
    uStack_244 = local_168._4_4_;
    uStack_240 = uStack_160;
    uStack_23c = uStack_15c;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_248);
    local_120 = local_1c8;
    uStack_25c = 0xf;
    local_268 = (longlong *)0x100000000000064;
    local_248 = 100;
    uStack_244 = 0x1000000;
    uStack_240 = uStack_260;
    uStack_23c = 0xf;
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_248);
    local_110 = &local_258;
    local_248 = _DAT_1419ee600;
    uStack_244 = uRam00000001419ee604;
    uStack_240 = uRam00000001419ee608;
    uStack_23c = uRam00000001419ee60c;
    local_118 = &local_1b8;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_248);
    local_108 = &local_198;
    local_248 = _DAT_1419ee630;
    uStack_244 = uRam00000001419ee634;
    uStack_240 = uRam00000001419ee638;
    uStack_23c = uRam00000001419ee63c;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_248);
    local_100 = &local_188;
    local_248 = (undefined4)local_148;
    uStack_244 = local_148._4_4_;
    uStack_240 = uStack_140;
    uStack_23c = uStack_13c;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_178);
    }
    FUN_140041b80(local_178,&local_248);
    local_f8 = local_178;
    ppuVar14 = &local_128;
    uVar5 = FUN_140265f80(local_res8,local_res10,&local_278,7,ppuVar14);
    iVar2 = FUN_140e63cb0(local_90,&local_res8,&local_res10,uVar5);
    if (0 < iVar2) {
      do {
        local_218 = 0x18;
        puVar6 = (undefined4 *)(**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f0d0);
        puVar7 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f0d0);
        FUN_140e609c0(local_res8);
        if (puVar6 != puVar7) {
          local_248 = *puVar6;
          uStack_244 = puVar6[1];
          uStack_240 = puVar6[2];
          uStack_23c = puVar6[3];
          if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_248);
        }
        FUN_140e60910(1);
        local_218 = 0x19;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar12 = local_258;
        if ((local_24c & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_258);
        }
        fVar11 = (float)FUN_140e78f90(0x40800000,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar11;
        local_218 = 0x1a;
        pdVar4 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar12 = local_258;
        if ((local_24c & 0xffffff) != 0) {
          dVar12 = (double)FUN_140e4b060(&local_258);
        }
        fVar11 = (float)FUN_140e79010(0x40800000,(float)dVar12);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar4);
        }
        *(undefined4 *)((longlong)pdVar4 + 0xc) = 0;
        *pdVar4 = (double)fVar11;
        local_218 = 0x1c;
        uVar5 = FUN_140e78f00(2);
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        local_1f4 = 0;
        local_200 = uVar5;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_200);
        local_218 = 0x1d;
        uVar5 = FUN_140e79480(0);
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        local_204 = 0;
        local_210 = uVar5;
        FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_210);
        cVar1 = FUN_140e643f0(local_90,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_90,&local_res8,&local_res10);
    local_218 = 0x20;
    uStack_27c = 0;
    local_288 = (longlong *)0x4076800000000000;
    local_res18 = 0x40;
    FUN_140046500(&local_288,&local_238);
    FUN_1400460e0(&local_258,&local_288);
    if ((1 << ((byte)uStack_27c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_288);
    }
    if (local_80 != 0) {
      FUN_140e4cd60();
    }
  }
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_a4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_26c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_278);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  _eh_vector_destructor_iterator_(local_1d8,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_228;
  return param_3;
}

