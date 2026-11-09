// gml_Script_anon_1485_gml_Object_oEnemySlime_Create_0 @ 0x140a747f0

undefined8 *
gml_Script_anon_1485_gml_Object_oEnemySlime_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  double *pdVar7;
  int iVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar12;
  ulonglong uVar13;
  undefined4 uVar15;
  undefined8 *puVar14;
  ulonglong in_stack_fffffffffffffd90;
  undefined1 **ppuVar16;
  ulonglong uVar17;
  double local_268;
  uint local_25c;
  double local_258;
  uint local_24c;
  undefined4 local_248;
  undefined4 uStack_244;
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
  undefined4 local_1f4;
  undefined8 local_1f0;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  longlong *local_198;
  undefined4 local_18c;
  longlong *local_188;
  undefined4 local_17c;
  longlong *local_178;
  undefined4 local_16c;
  undefined1 local_168 [16];
  undefined1 local_158 [16];
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined1 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 local_d8 [16];
  longlong local_c8;
  
  local_230 = "gml_Script_anon@156@gml_Object_oEnemySlime_Create_0";
  local_238 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_238;
  local_228 = 8;
  pcVar12 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_168,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_19c = 0xffffff;
  local_1a8 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  uStack_1bc = 0xffffff;
  local_1c8 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_1e4 = 0xffffff;
  local_1f0 = 0;
  local_1f4 = 0xffffff;
  local_200 = 0;
  local_204 = 0xffffff;
  local_210 = 0;
  local_24c = 0xffffff;
  local_258 = 0.0;
  local_25c = 0xffffff;
  local_268 = 0.0;
  local_214 = 0;
  local_220 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_228 = 9;
  uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f1d58);
  FUN_140e87440(uVar3,DAT_1419f4a98,0x80000000,&local_1a8,(ulonglong)pcVar12 & 0xffffffffffffff00,
                in_stack_fffffffffffffd90 & 0xffffffffffffff00);
  uVar3 = FUN_140069500(uVar3);
  ppuVar16 = (undefined1 **)0x0;
  puVar14 = &local_1a8;
  FUN_140e63610(uVar3,local_res10,&local_220,0,puVar14,0);
  iVar8 = 5;
  do {
    iVar8 = iVar8 + -1;
    local_228 = 0xc;
    if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_220);
    }
    local_220 = 0;
    local_218 = 0;
    local_214 = 5;
    local_18c = 6;
    local_198 = local_res8;
    uVar17 = (ulonglong)ppuVar16 & 0xffffffffffffff00;
    uVar13 = (ulonglong)puVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_198,DAT_1419fe0e8,0x80000000,&local_1b8,uVar13,uVar17);
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_17c = 6;
    local_188 = local_res8;
    uVar17 = uVar17 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_1c8,uVar13,uVar17);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_16c = 6;
    local_178 = local_res8;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_178,DAT_141a1b910,0x80000000,&local_1d8,uVar13,uVar17 & 0xffffffffffffff00)
    ;
    uVar15 = (undefined4)(uVar13 >> 0x20);
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_248 = (undefined4)local_1b8;
    uStack_244 = local_1b8._4_4_;
    uStack_240 = uStack_1b0;
    uStack_23c = uStack_1ac;
    if ((1 << (local_168[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_168);
    }
    FUN_140041b80(local_168,&local_248);
    local_f8 = local_168;
    local_248 = (undefined4)local_1c8;
    uStack_244 = local_1c8._4_4_;
    uStack_240 = uStack_1c0;
    uStack_23c = uStack_1bc;
    if ((1 << (local_158[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_248);
    local_f0 = local_158;
    local_248 = (undefined4)local_1d8;
    uStack_244 = local_1d8._4_4_;
    uStack_240 = uStack_1d0;
    uStack_23c = uStack_1cc;
    if ((1 << (local_148[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_148);
    }
    FUN_140041b80(local_148,&local_248);
    local_e8 = local_148;
    uStack_10c = 0xf;
    local_118 = 0x100000000000023;
    local_248 = 0x23;
    uStack_244 = 0x1000000;
    uStack_240 = uStack_110;
    uStack_23c = 0xf;
    if ((1 << (local_138[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_248);
    local_e0 = local_138;
    ppuVar16 = &local_f8;
    puVar14 = (undefined8 *)CONCAT44(uVar15,DAT_141a0a7c8);
    uVar3 = FUN_140e634e0(local_res8,local_res10,&local_220,4,puVar14,ppuVar16);
    iVar2 = FUN_140e63cb0(local_d8,&local_res8,&local_res10,uVar3);
    if (0 < iVar2) {
      do {
        local_228 = 0xe;
        uStack_fc = 0xf;
        local_108 = 0x1000001000002cc;
        local_248 = 0x2cc;
        uStack_244 = 0x1000001;
        uStack_240 = uStack_100;
        uStack_23c = 0xf;
        if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f0);
        }
        FUN_140041b80(&local_1f0,&local_248);
        FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_1f0);
        local_228 = 0xf;
        if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_200);
        }
        local_1f4 = 0;
        local_200 = 0;
        FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_200);
        local_228 = 0x10;
        if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_210);
        }
        local_204 = 0;
        local_210 = 0x3ff0000000000000;
        FUN_140e86fa0(local_res8,DAT_141a0cfc8,0x80000000,&local_210);
        local_228 = 0x11;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a04c38);
        uStack_11c = 0xd;
        local_128 = 0x3ff0000000000000;
        if (&local_128 != puVar4) {
          local_248 = 0;
          uStack_244 = 0x3ff00000;
          uStack_240 = uStack_120;
          uStack_23c = 0xd;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_248);
        }
        local_228 = 0x12;
        puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a748);
        uVar3 = FUN_140e794b0(0x9999999a,0);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar4);
        }
        *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
        *puVar4 = uVar3;
        local_228 = 0x13;
        puVar5 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a0a748);
        puVar6 = (undefined4 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a0a858);
        FUN_140e609c0(local_res8);
        if (puVar5 != puVar6) {
          local_248 = *puVar5;
          uStack_244 = puVar5[1];
          uStack_240 = puVar5[2];
          uStack_23c = puVar5[3];
          if ((1 << ((byte)puVar6[3] & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_248);
        }
        FUN_140e60910(1);
        local_228 = 0x14;
        dVar10 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_24c = 0;
        local_228 = 0x15;
        local_258 = dVar10;
        dVar10 = (double)FUN_140e794b0(0,0);
        if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        local_25c = 0;
        local_228 = 0x16;
        local_268 = dVar10;
        pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        dVar10 = local_258;
        if ((local_24c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_258);
        }
        dVar11 = local_268;
        if ((local_25c & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_268);
        }
        fVar9 = (float)FUN_140e78f90((float)dVar11,(float)dVar10);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
        *pdVar7 = (double)fVar9;
        local_228 = 0x17;
        pdVar7 = (double *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        dVar10 = local_258;
        if ((local_24c & 0xffffff) != 0) {
          dVar10 = (double)FUN_140e4b060(&local_258);
        }
        dVar11 = local_268;
        if ((local_25c & 0xffffff) != 0) {
          dVar11 = (double)FUN_140e4b060(&local_268);
        }
        fVar9 = (float)FUN_140e79010((float)dVar11,(float)dVar10);
        if ((1 << ((byte)*(undefined4 *)((longlong)pdVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(pdVar7);
        }
        *(undefined4 *)((longlong)pdVar7 + 0xc) = 0;
        *pdVar7 = (double)fVar9;
        cVar1 = FUN_140e643f0(local_d8,&local_res8,&local_res10);
      } while (cVar1 != '\0');
    }
    FUN_140e63970(local_d8,&local_res8,&local_res10);
    if (local_c8 != 0) {
      FUN_140e4cd60();
    }
  } while (0 < iVar8);
  if ((1 << ((byte)local_214 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_220);
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)local_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)local_204 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_210);
  }
  if ((1 << ((byte)local_1f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_200);
  }
  if ((1 << ((byte)local_1e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)uStack_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(local_168,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_238;
  return param_3;
}

