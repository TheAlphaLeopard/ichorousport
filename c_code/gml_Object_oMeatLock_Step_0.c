// gml_Object_oMeatLock_Step_0 @ 0x140b63a70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oMeatLock_Step_0(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong **pplVar9;
  uint uVar10;
  undefined4 uVar11;
  longlong *local_res8;
  longlong *local_res10;
  uint local_res18;
  longlong local_res20;
  code *pcVar12;
  ulonglong uVar13;
  undefined4 uVar15;
  longlong *plVar14;
  undefined8 **in_stack_fffffffffffffd90;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 local_268;
  undefined4 local_260;
  undefined4 local_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_21c;
  undefined1 local_218 [12];
  undefined4 local_20c;
  undefined1 local_208 [12];
  undefined4 local_1fc;
  undefined1 local_1f8 [12];
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  longlong *local_1d8;
  undefined4 uStack_1cc;
  longlong *local_1c8;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  longlong *local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined8 local_138;
  undefined4 local_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  undefined4 local_fc;
  longlong *local_f8;
  undefined4 local_ec;
  undefined1 local_e8 [16];
  longlong local_d8;
  undefined1 local_c8 [16];
  longlong local_b8;
  
  uVar10 = 0;
  local_res18 = 0;
  local_1a0 = "gml_Object_oMeatLock_Destroy_0";
  local_198 = 0;
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  pcVar12 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_228,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar11 = 0xffffff;
  uStack_1dc = 0xffffff;
  local_1e8 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_12c = 0xffffff;
  local_138 = 0;
  local_184 = 0xffffff;
  local_190 = (longlong *)0x0;
  local_25c = 0xffffff;
  local_268 = 0;
  local_198 = 2;
  uStack_24c = 0xf;
  local_258 = (longlong *)0x1000000000000cb;
  iVar3 = FUN_140e63cb0(local_e8,&local_res8,&local_res10,&local_258);
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if (0 < iVar3) {
    do {
      local_198 = 4;
      if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_268);
      }
      local_268 = 0;
      local_260 = 0;
      local_25c = 5;
      uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f42c8);
      uStack_24c = 6;
      local_258 = local_res8;
      uVar16 = (ulonglong)in_stack_fffffffffffffd90 & 0xffffffffffffff00;
      uVar13 = (ulonglong)pcVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_258,DAT_1419fe0e8,0x80000000,&local_1e8,uVar13,uVar16);
      if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_258);
      }
      uStack_1cc = 6;
      local_1d8 = local_res8;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_1d8,DAT_1419fe158,0x80000000,&local_178,uVar13,uVar16);
      if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1bc = 6;
      local_1c8 = local_res10;
      uVar16 = uVar16 & 0xffffffffffffff00;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_1c8,DAT_1419fe0e8,0x80000000,&local_118,uVar13,uVar16);
      if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      local_1ac = 6;
      local_1b8 = local_res10;
      uVar13 = uVar13 & 0xffffffffffffff00;
      FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_128,uVar13,
                    uVar16 & 0xffffffffffffff00);
      uVar15 = (undefined4)(uVar13 >> 0x20);
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_248 = local_1e8;
      uStack_240 = uStack_1e0;
      uStack_23c = uStack_1dc;
      if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_228);
      }
      FUN_140041b80(&local_228,&local_248);
      local_158 = &local_228;
      local_248 = local_178;
      uStack_240 = uStack_170;
      uStack_23c = uStack_16c;
      if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_218);
      }
      FUN_140041b80(local_218,&local_248);
      local_150 = local_218;
      local_248 = local_118;
      uStack_240 = uStack_110;
      uStack_23c = uStack_10c;
      if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_208);
      }
      FUN_140041b80(local_208,&local_248);
      local_148 = local_208;
      local_248 = local_128;
      uStack_240 = uStack_120;
      uStack_23c = uStack_11c;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1f8);
      }
      FUN_140041b80(local_1f8,&local_248);
      local_140 = local_1f8;
      in_stack_fffffffffffffd90 = &local_158;
      pcVar12 = (code *)CONCAT44(uVar15,DAT_1419fd548);
      uVar5 = FUN_140e634e0(local_res8,local_res10,&local_268,4,pcVar12,in_stack_fffffffffffffd90);
      iVar3 = FUN_140e851f0(uVar5,uVar4,DAT_141955260,1);
      if (iVar3 < 1) {
        local_198 = 5;
        if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_268);
        }
        local_268 = 0;
        local_260 = 0;
        local_25c = 5;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
        puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f090);
        if (puVar7 != &local_228) {
          local_248 = *puVar7;
          uStack_240 = *(undefined4 *)(puVar7 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_228);
          }
          FUN_140041b80(&local_228,&local_248);
        }
        local_158 = &local_228;
        local_248 = CONCAT44(uRam00000001419ec3e4,_DAT_1419ec3e0);
        uStack_240 = uRam00000001419ec3e8;
        uStack_23c = uRam00000001419ec3ec;
        if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_218);
        }
        FUN_140041b80(local_218,&local_248);
        local_150 = local_218;
        FUN_140e609c0(local_res8);
        puVar7 = (undefined8 *)FUN_140e79230(&local_268,2,&local_158);
        if (puVar7 != puVar6) {
          local_248 = *puVar7;
          uStack_240 = *(undefined4 *)(puVar7 + 1);
          uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_248);
        }
        FUN_140e60910(1);
      }
      else {
        local_198 = 4;
      }
      cVar2 = FUN_140e643f0(local_e8,&local_res8,&local_res10);
    } while (cVar2 != '\0');
  }
  FUN_140e63970(local_e8,&local_res8,&local_res10);
  local_198 = 9;
  puVar7 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419f43c8);
  if (puVar7 != &local_228) {
    local_248 = *puVar7;
    uStack_240 = *(undefined4 *)(puVar7 + 1);
    uStack_23c = *(undefined4 *)((longlong)puVar7 + 0xc);
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_248);
  }
  local_158 = &local_228;
  FUN_140edd0e0(local_res8,local_res10,1,&local_158);
  local_198 = 0xb;
  uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f43b8);
  uVar4 = FUN_14018a720(&local_168,uVar4,2);
  lVar8 = FUN_140e4a8b0(uVar4);
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  while (0 < lVar8) {
    local_198 = 0xc;
    local_res20 = lVar8 + -1;
    uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f440);
    plVar14 = local_res8;
    plVar17 = local_res10;
    FUN_140e87170(uVar4,DAT_1419fe0e8,0x80000000,&local_138,local_res8,local_res10);
    local_1ac = 6;
    local_1b8 = local_res8;
    uVar16 = (ulonglong)plVar17 & 0xffffffffffffff00;
    uVar13 = (ulonglong)plVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_1e8,uVar13,uVar16);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    iVar3 = FUN_140e851f0(&local_138,&local_1e8,DAT_141955260,1);
    if (iVar3 == -2 || -1 < iVar3) {
      local_1bc = 0;
      local_1c8 = (longlong *)0x3ff0000000000000;
      pplVar9 = &local_1c8;
      uVar10 = uVar10 | 2;
    }
    else {
      uStack_1cc = 0;
      local_1d8 = (longlong *)&DAT_bff0000000000000;
      pplVar9 = &local_1d8;
      uVar10 = uVar10 | 1;
    }
    local_238 = *(undefined4 *)pplVar9;
    uStack_234 = *(undefined4 *)((longlong)pplVar9 + 4);
    uStack_230 = *(undefined4 *)(pplVar9 + 1);
    uStack_22c = *(undefined4 *)((longlong)pplVar9 + 0xc);
    local_res18 = uVar10;
    if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_190);
    }
    FUN_140041b80(&local_190,&local_238);
    if (((uVar10 & 2) != 0) &&
       (uVar10 = uVar10 & 0xfffffffd, local_res18 = uVar10,
       (1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1c8);
    }
    if (((uVar10 & 1) != 0) &&
       (uVar10 = uVar10 & 0xfffffffe, local_res18 = uVar10,
       (1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0)) {
      FUN_140041a50(&local_1d8);
    }
    local_198 = 0xd;
    if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_268);
    }
    local_268 = 0;
    local_260 = 0;
    local_25c = 5;
    local_fc = 6;
    local_108 = local_res8;
    uVar16 = uVar16 & 0xffffffffffffff00;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_108,DAT_1419fe0e8,0x80000000,&local_1e8,uVar13,uVar16);
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_ec = 6;
    local_f8 = local_res8;
    uVar13 = uVar13 & 0xffffffffffffff00;
    FUN_140e87440(&local_f8,DAT_1419fe158,0x80000000,&local_178,uVar13,uVar16 & 0xffffffffffffff00);
    uVar11 = (undefined4)(uVar13 >> 0x20);
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    local_238 = (undefined4)local_1e8;
    uStack_234 = local_1e8._4_4_;
    uStack_230 = uStack_1e0;
    uStack_22c = uStack_1dc;
    if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_228);
    }
    FUN_140041b80(&local_228,&local_238);
    local_158 = &local_228;
    local_238 = (undefined4)local_178;
    uStack_234 = local_178._4_4_;
    uStack_230 = uStack_170;
    uStack_22c = uStack_16c;
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_238);
    local_150 = local_218;
    local_238 = _DAT_141dd9b88;
    uStack_234 = uRam0000000141dd9b8c;
    uStack_230 = uRam0000000141dd9b90;
    uStack_22c = DAT_141dd9b94;
    if ((1 << ((byte)local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_238);
    local_148 = local_208;
    uStack_23c = 0xf;
    local_248 = 0x10000000000009a;
    local_238 = 0x9a;
    uStack_234 = 0x1000000;
    uStack_230 = uStack_240;
    uStack_22c = 0xf;
    if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_238);
    local_140 = local_1f8;
    uVar4 = FUN_140e634e0(local_res8,local_res10,&local_268,4,CONCAT44(uVar11,DAT_141a0a7c8),
                          &local_158);
    iVar3 = FUN_140e63cb0(local_c8,&local_res8,&local_res10,uVar4);
    uVar11 = local_184;
    uVar15 = local_188;
    plVar14 = local_190;
    lVar8 = lVar8 + -1;
    if (0 < iVar3) {
      bVar1 = (byte)local_184;
      do {
        local_198 = 0xf;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f230);
        FUN_140e609c0(local_res8);
        uVar4 = FUN_140e794b0(0,0);
        uStack_24c = uVar11;
        uStack_250 = uVar15;
        if ((1 << (bVar1 & 0x1f) & 0x46U) == 0) {
          local_258 = plVar14;
        }
        else {
          FUN_1400419b0(&local_258,&local_190);
        }
        local_res18 = uVar10 | 8;
        local_15c = 0;
        local_168 = uVar4;
        FUN_140042560(&local_258,&local_168);
        if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        if (&local_258 != puVar7) {
          local_238 = (undefined4)local_258;
          uStack_234 = local_258._4_4_;
          uStack_230 = uStack_250;
          uStack_22c = uStack_24c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar7);
          }
          FUN_140041b80(puVar7,&local_238);
        }
        local_res18 = uVar10;
        if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        FUN_140e60910(1);
        local_198 = 0x10;
        puVar7 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_141a1f500);
        uVar4 = FUN_140e794b0(0,0);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar7);
        }
        *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
        *puVar7 = uVar4;
        cVar2 = FUN_140e643f0(local_c8,&local_res8,&local_res10);
      } while (cVar2 != '\0');
      lVar8 = local_res20;
    }
    FUN_140e63970(local_c8,&local_res8,&local_res10);
    if (local_b8 != 0) {
      FUN_140e4cd60();
    }
  }
  if (local_d8 != 0) {
    FUN_140e4cd60();
    local_d8 = 0;
  }
  if ((1 << ((byte)local_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  _eh_vector_destructor_iterator_(&local_228,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return;
}

