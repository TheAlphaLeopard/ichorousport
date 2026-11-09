// gml_Script_anon_557_gml_Object_oElectric_Alarm_0 @ 0x140927600

void gml_Script_anon_557_gml_Object_oElectric_Alarm_0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong *local_res8;
  longlong *local_res10;
  undefined4 local_res18;
  code *pcVar13;
  ulonglong uVar14;
  undefined4 uVar17;
  longlong *plVar15;
  undefined8 uVar16;
  undefined4 **in_stack_fffffffffffffd20;
  ulonglong uVar18;
  undefined4 **ppuVar19;
  longlong *plVar20;
  undefined8 local_2d8;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  uint uStack_2bc;
  undefined8 local_2b8;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined8 local_2a8;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined8 local_288;
  char *local_280;
  undefined4 local_278;
  undefined8 local_268;
  undefined4 uStack_260;
  uint uStack_25c;
  undefined8 local_258;
  undefined4 uStack_250;
  uint uStack_24c;
  undefined8 local_248;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  uint uStack_22c;
  undefined8 local_228;
  undefined4 uStack_220;
  uint uStack_21c;
  undefined4 local_218 [3];
  byte local_20c;
  undefined1 local_208 [12];
  byte local_1fc;
  undefined1 local_1f8 [12];
  byte local_1ec;
  undefined4 local_1e8 [3];
  byte local_1dc;
  undefined4 local_1d8 [3];
  byte local_1cc;
  undefined1 local_1c8 [12];
  byte local_1bc;
  undefined1 local_1b8 [12];
  byte local_1ac;
  undefined4 local_1a8 [3];
  byte local_19c;
  undefined1 local_198 [12];
  byte local_18c;
  double local_188;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 *local_118;
  undefined1 *local_110;
  undefined1 *local_108;
  undefined4 *local_100;
  undefined4 *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined4 *local_e0;
  undefined1 *local_d8;
  longlong *local_c8;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_ac;
  longlong *local_a8;
  undefined4 local_9c;
  longlong *local_98;
  undefined4 local_8c;
  longlong *local_88;
  undefined4 local_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_res18 = 0;
  local_280 = "gml_Object_oElectric_Alarm_0";
  local_278 = 0;
  local_288 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_288;
  pcVar13 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_218,0x10,9,FUN_1400424d0,FUN_140041b30);
  uStack_23c = 0xffffff;
  local_248 = 0;
  uStack_24c = 0xffffff;
  local_258 = 0.0;
  uStack_25c = 0xffffff;
  local_268 = 0.0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_21c = 0xffffff;
  local_228 = 0.0;
  uStack_22c = 0xffffff;
  local_238 = 0.0;
  local_17c = 0xffffff;
  local_188 = 0.0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  uStack_14c = 0xffffff;
  local_158 = 0;
  local_2ac = 0xffffff;
  local_2b8 = 0;
  local_28c = 0xffffff;
  local_298 = 0;
  local_278 = 2;
  puVar4 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419efd08);
  if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(puVar4);
  }
  *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
  *puVar4 = 0xc010000000000000;
  local_278 = 3;
  uStack_29c = 0xf;
  local_2a8 = (longlong *)0x10000000000009d;
  iVar2 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_2a8);
  if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2a8);
  }
  if (0 < iVar2) {
    do {
      local_278 = 5;
      uVar5 = (**(code **)(*local_res10 + 8))(local_res10,DAT_1419ffd18);
      uStack_29c = 6;
      local_2a8 = local_res8;
      in_stack_fffffffffffffd20 =
           (undefined4 **)((ulonglong)in_stack_fffffffffffffd20 & 0xffffffffffffff00);
      pcVar13 = (code *)((ulonglong)pcVar13 & 0xffffffffffffff00);
      FUN_140e87440(&local_2a8,DAT_141a0a828,0x80000000,&local_248,pcVar13,in_stack_fffffffffffffd20
                   );
      if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_2a8);
      }
      iVar2 = FUN_140e851f0(&local_248,uVar5,DAT_141955260,0);
      if (iVar2 == 0) {
        local_278 = 5;
      }
      else {
        local_278 = 6;
        uVar5 = (**(code **)(*local_res10 + 8))(local_res10,DAT_141a1f0d0);
        local_bc = 6;
        local_c8 = local_res8;
        in_stack_fffffffffffffd20 =
             (undefined4 **)((ulonglong)in_stack_fffffffffffffd20 & 0xffffffffffffff00);
        pcVar13 = (code *)((ulonglong)pcVar13 & 0xffffffffffffff00);
        FUN_140e87440(&local_c8,DAT_141a0a828,0x80000000,&local_248,pcVar13,
                      in_stack_fffffffffffffd20);
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        iVar2 = FUN_140e851f0(&local_248,uVar5,DAT_141955260,0);
        if (iVar2 == 0) {
          local_278 = 6;
        }
        else {
          local_278 = 7;
          if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2b8);
          }
          local_2b8 = 0;
          local_2b0 = 0;
          local_2ac = 5;
          local_ac = 6;
          local_b8 = local_res8;
          uVar18 = (ulonglong)in_stack_fffffffffffffd20 & 0xffffffffffffff00;
          uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
          FUN_140e87440(&local_b8,DAT_1419fe0e8,0x80000000,&local_258,uVar14,uVar18);
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          local_9c = 6;
          local_a8 = local_res8;
          uVar18 = uVar18 & 0xffffffffffffff00;
          uVar14 = uVar14 & 0xffffffffffffff00;
          FUN_140e87440(&local_a8,DAT_1419fe158,0x80000000,&local_268,uVar14,uVar18);
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          local_8c = 6;
          local_98 = local_res10;
          uVar18 = uVar18 & 0xffffffffffffff00;
          uVar14 = uVar14 & 0xffffffffffffff00;
          FUN_140e87440(&local_98,DAT_1419fe0e8,0x80000000,&local_128,uVar14,uVar18);
          if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_98);
          }
          local_7c = 6;
          local_88 = local_res10;
          uVar14 = uVar14 & 0xffffffffffffff00;
          FUN_140e87440(&local_88,DAT_1419fe158,0x80000000,&local_138,uVar14,
                        uVar18 & 0xffffffffffffff00);
          uVar17 = (undefined4)(uVar14 >> 0x20);
          if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_88);
          }
          local_2c8 = (undefined4)local_258;
          uStack_2c4 = local_258._4_4_;
          uStack_2c0 = uStack_250;
          uStack_2bc = uStack_24c;
          if ((1 << ((byte)_local_20c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_218);
          }
          FUN_140041b80(local_218,&local_2c8);
          local_118 = local_218;
          local_2c8 = (undefined4)local_268;
          uStack_2c4 = local_268._4_4_;
          uStack_2c0 = uStack_260;
          uStack_2bc = uStack_25c;
          if ((1 << ((byte)_local_1fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_208);
          }
          FUN_140041b80(local_208,&local_2c8);
          local_2c8 = (undefined4)local_128;
          uStack_2c4 = local_128._4_4_;
          uStack_2c0 = uStack_120;
          uStack_2bc = uStack_11c;
          local_110 = local_208;
          if ((1 << ((byte)_local_1ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1f8);
          }
          FUN_140041b80(local_1f8,&local_2c8);
          local_108 = local_1f8;
          local_2c8 = (undefined4)local_138;
          uStack_2c4 = local_138._4_4_;
          uStack_2c0 = uStack_130;
          uStack_2bc = uStack_12c;
          if ((1 << ((byte)_local_1dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_1e8);
          }
          FUN_140041b80(local_1e8,&local_2c8);
          local_100 = local_1e8;
          in_stack_fffffffffffffd20 = &local_118;
          pcVar13 = (code *)CONCAT44(uVar17,DAT_1419fd548);
          uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2b8,4,pcVar13,
                                in_stack_fffffffffffffd20);
          uStack_2cc = 0;
          local_2d8 = (longlong *)0x4060000000000000;
          iVar2 = FUN_140e851f0(uVar5,&local_2d8,DAT_141955260,1);
          if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_2d8);
          }
          if (iVar2 < 1) {
            local_278 = 9;
            puVar4 = (undefined8 *)(**(code **)(*local_res10 + 0x10))(local_res10,DAT_1419efd08);
            uStack_2cc = 6;
            local_2d8 = local_res8;
            pcVar13 = (code *)((ulonglong)pcVar13 & 0xffffffffffffff00);
            FUN_140e87440(&local_2d8,DAT_141a0a828,0x80000000,&local_248,pcVar13,
                          (ulonglong)in_stack_fffffffffffffd20 & 0xffffffffffffff00);
            if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_2d8);
            }
            FUN_140e609c0(local_res10);
            if (&local_248 != puVar4) {
              local_2c8 = (undefined4)local_248;
              uStack_2c4 = local_248._4_4_;
              uStack_2c0 = uStack_240;
              uStack_2bc = uStack_23c;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar4);
              }
              FUN_140041b80(puVar4,&local_2c8);
            }
            FUN_140e60910(1);
            local_278 = 10;
            break;
          }
          local_278 = 7;
        }
      }
      cVar1 = FUN_140e643f0(local_78,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  uVar17 = (undefined4)((ulonglong)pcVar13 >> 0x20);
  FUN_140e63970(local_78,&local_res8,&local_res10);
  local_278 = 0xe;
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  local_2b8 = 0;
  local_2b0 = 0;
  local_2ac = 5;
  puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419efd08);
  if (puVar6 != local_218) {
    local_2c8 = *puVar6;
    uStack_2c4 = puVar6[1];
    uStack_2c0 = puVar6[2];
    uStack_2bc = puVar6[3];
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2c8);
  }
  local_118 = local_218;
  ppuVar19 = &local_118;
  uVar14 = CONCAT44(uVar17,DAT_141a02ef8);
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_2b8,1,uVar14,ppuVar19);
  cVar1 = FUN_140e491e0(uVar5);
  if (cVar1 == '\0') {
    local_278 = 0x10;
    FUN_140edd0e0(local_res8,local_res10,0,0);
    local_278 = 0x11;
  }
  else {
    local_278 = 0x15;
    local_2d8 = (longlong *)0x3ff0000000000000;
    uStack_2cc = 0xd;
    local_2c8 = 0;
    uStack_2c4 = 0x3ff00000;
    uStack_2c0 = uStack_2d0;
    uStack_2bc = 0xd;
    if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_168);
    }
    FUN_140041b80(&local_168,&local_2c8);
    FUN_140e86fa0(local_res8,DAT_1419f61d8,0x80000000,&local_168);
    local_278 = 0x17;
    uStack_2cc = 6;
    local_2d8 = local_res8;
    uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_2d8,DAT_1419fe0e8,0x80000000,&local_258,uVar14,uVar18);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    uStack_2cc = 6;
    local_2d8 = local_res8;
    FUN_140e87440(&local_2d8,DAT_1419fe158,0x80000000,&local_268,uVar14 & 0xffffffffffffff00,
                  uVar18 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419efd08);
    FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_228,local_res8,local_res10);
    plVar15 = local_res8;
    plVar20 = local_res10;
    FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_238,local_res8,local_res10);
    dVar9 = local_238;
    if ((uStack_22c & 0xffffff) != 0) {
      dVar9 = (double)FUN_140e4b060(&local_238);
    }
    dVar10 = local_228;
    if ((uStack_21c & 0xffffff) != 0) {
      dVar10 = (double)FUN_140e4b060(&local_228);
    }
    dVar11 = local_268;
    if ((uStack_25c & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_268);
    }
    dVar12 = local_258;
    if ((uStack_24c & 0xffffff) != 0) {
      dVar12 = (double)FUN_140e4b060(&local_258);
    }
    fVar8 = (float)FUN_140e793d0((float)dVar12,(float)dVar11,(float)dVar10,(float)dVar9);
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    local_17c = 0;
    local_188 = (double)fVar8;
    FUN_140e86fa0(local_res8,DAT_141a0a778,0x80000000,&local_188);
    local_278 = 0x18;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    uStack_2cc = 6;
    local_2d8 = local_res8;
    uVar18 = (ulonglong)plVar20 & 0xffffffffffffff00;
    uVar14 = (ulonglong)plVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_2d8,DAT_1419fe0e8,0x80000000,&local_258,uVar14,uVar18);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    uStack_2cc = 6;
    local_2d8 = local_res8;
    FUN_140e87440(&local_2d8,DAT_1419fe158,0x80000000,&local_268,uVar14 & 0xffffffffffffff00,
                  uVar18 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    uVar5 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419efd08);
    FUN_140e87170(uVar5,DAT_1419fe0e8,0x80000000,&local_228,local_res8,local_res10);
    plVar15 = local_res8;
    plVar20 = local_res10;
    FUN_140e87170(uVar5,DAT_1419fe158,0x80000000,&local_238,local_res8,local_res10);
    local_2c8 = (undefined4)local_258;
    uStack_2c4 = local_258._4_4_;
    uStack_2c0 = uStack_250;
    uStack_2bc = uStack_24c;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2c8);
    local_118 = local_218;
    local_2c8 = (undefined4)local_268;
    uStack_2c4 = local_268._4_4_;
    uStack_2c0 = uStack_260;
    uStack_2bc = uStack_25c;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2c8);
    local_2c8 = (undefined4)local_228;
    uStack_2c4 = local_228._4_4_;
    uStack_2c0 = uStack_220;
    uStack_2bc = uStack_21c;
    local_110 = local_208;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2c8);
    local_108 = local_1f8;
    local_2c8 = (undefined4)local_238;
    uStack_2c4 = local_238._4_4_;
    uStack_2c0 = uStack_230;
    uStack_2bc = uStack_22c;
    if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1e8);
    }
    FUN_140041b80(local_1e8,&local_2c8);
    local_100 = local_1e8;
    uStack_2cc = 6;
    local_2d8 = local_res8;
    uVar14 = (ulonglong)plVar15 & 0xffffffffffffff00;
    FUN_140e87440(&local_2d8,DAT_141a0a728,0x80000000,&local_148,uVar14,
                  (ulonglong)plVar20 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar14 >> 0x20);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_2c8 = (undefined4)local_148;
    uStack_2c4 = local_148._4_4_;
    uStack_2c0 = uStack_140;
    uStack_2bc = uStack_13c;
    if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1d8);
    }
    FUN_140041b80(local_1d8,&local_2c8);
    local_f8 = local_1d8;
    uVar16 = CONCAT44(uVar17,DAT_141a047c8);
    uVar5 = FUN_140e634e0(local_res8,local_res10,&local_298,1,uVar16,&local_f8);
    ppuVar19 = &local_118;
    uVar14 = CONCAT44((int)((ulonglong)uVar16 >> 0x20),DAT_1419fd548);
    puVar4 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_2b8,4,uVar14,ppuVar19);
    uStack_29c = *(undefined4 *)((longlong)puVar4 + 0xc);
    uStack_2a0 = *(undefined4 *)(puVar4 + 1);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) == 0) {
      local_2a8 = (longlong *)*puVar4;
    }
    else {
      FUN_1400419b0(&local_2a8,puVar4);
    }
    local_res18 = 1;
    FUN_140046500(&local_2a8,uVar5);
    local_2c8 = (undefined4)local_2a8;
    uStack_2c4 = local_2a8._4_4_;
    uStack_2c0 = uStack_2a0;
    uStack_2bc = uStack_29c;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_2c8);
    if ((1 << ((byte)uStack_29c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2a8);
    }
    FUN_140e86fa0(local_res8,DAT_141a0f7f8,0x80000000,&local_178);
    local_278 = 0x1c;
    if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2b8);
    }
    local_2b8 = 0;
    local_2b0 = 0;
    local_2ac = 5;
    if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_298);
    }
    local_298 = 0;
    local_290 = 0;
    local_28c = 5;
    puVar6 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f0d0);
    uStack_2cc = 6;
    local_2d8 = local_res8;
    uVar18 = (ulonglong)ppuVar19 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_2d8,DAT_1419fe0e8,0x80000000,&local_258,uVar14,uVar18);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    uStack_2cc = 6;
    local_2d8 = local_res8;
    uVar18 = uVar18 & 0xffffffffffffff00;
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(&local_2d8,DAT_1419fe158,0x80000000,&local_268,uVar14,uVar18);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    puVar7 = (undefined4 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419efd08);
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(puVar6,DAT_141a0a7d8,0x80000000,&local_158,uVar14,uVar18 & 0xffffffffffffff00);
    uVar17 = (undefined4)(uVar14 >> 0x20);
    uVar3 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
    if (uVar3 == 0xf) {
      uVar3 = 0x4000004;
    }
    else {
      uVar3 = uVar3 | 0x1000000;
    }
    uStack_2cc = 0xf;
    plVar15 = (longlong *)(CONCAT44(uVar3,DAT_141a575a0) & 0xffffffff00ffffff);
    local_2d8._0_4_ = SUB84(plVar15,0);
    local_2d8._4_4_ = (undefined4)((ulonglong)plVar15 >> 0x20);
    local_2c8 = (undefined4)local_2d8;
    uStack_2c4 = local_2d8._4_4_;
    uStack_2c0 = uStack_2d0;
    uStack_2bc = 0xf;
    local_2d8 = plVar15;
    if ((1 << (local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_218);
    }
    FUN_140041b80(local_218,&local_2c8);
    local_118 = local_218;
    local_2c8 = (undefined4)local_258;
    uStack_2c4 = local_258._4_4_;
    uStack_2c0 = uStack_250;
    uStack_2bc = uStack_24c;
    if ((1 << (local_1fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_208);
    }
    FUN_140041b80(local_208,&local_2c8);
    local_2c8 = (undefined4)local_268;
    uStack_2c4 = local_268._4_4_;
    uStack_2c0 = uStack_260;
    uStack_2bc = uStack_25c;
    local_110 = local_208;
    if ((1 << (local_1ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1f8);
    }
    FUN_140041b80(local_1f8,&local_2c8);
    local_108 = local_1f8;
    if (puVar6 != local_1e8) {
      local_2c8 = *puVar6;
      uStack_2c4 = puVar6[1];
      uStack_2c0 = puVar6[2];
      uStack_2bc = puVar6[3];
      if ((1 << (local_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1e8);
      }
      FUN_140041b80(local_1e8,&local_2c8);
    }
    local_100 = local_1e8;
    if (puVar7 != local_1d8) {
      local_2c8 = *puVar7;
      uStack_2c4 = puVar7[1];
      uStack_2c0 = puVar7[2];
      uStack_2bc = puVar7[3];
      if ((1 << (local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1d8);
      }
      FUN_140041b80(local_1d8,&local_2c8);
    }
    local_f8 = local_1d8;
    local_2c8 = (undefined4)local_158;
    uStack_2c4 = local_158._4_4_;
    uStack_2c0 = uStack_150;
    uStack_2bc = uStack_14c;
    if ((1 << (local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1c8);
    }
    FUN_140041b80(local_1c8,&local_2c8);
    local_f0 = local_1c8;
    FUN_140e645a0(&local_2d8,gml_Object_oEnemyCage_Create_0,local_res8);
    local_2c8 = (undefined4)local_2d8;
    uStack_2c4 = local_2d8._4_4_;
    uStack_2c0 = uStack_2d0;
    uStack_2bc = uStack_2cc;
    if ((1 << (local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_1b8);
    }
    FUN_140041b80(local_1b8,&local_2c8);
    if ((1 << ((byte)uStack_2cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_2d8);
    }
    local_e8 = local_1b8;
    puVar6 = (undefined4 *)
             FUN_140e634e0(local_res8,local_res10,&local_298,7,CONCAT44(uVar17,DAT_1419fd6d8),
                           &local_118);
    if (puVar6 != local_1a8) {
      local_2c8 = *puVar6;
      uStack_2c4 = puVar6[1];
      uStack_2c0 = puVar6[2];
      uStack_2bc = puVar6[3];
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_1a8);
      }
      FUN_140041b80(local_1a8,&local_2c8);
    }
    local_e0 = local_1a8;
    local_2c8 = (undefined4)DAT_1419df7b0;
    uStack_2c4 = DAT_1419df7b0._4_4_;
    uStack_2c0 = DAT_1419df7b8;
    uStack_2bc = DAT_1419df7bc;
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_198);
    }
    FUN_140041b80(local_198,&local_2c8);
    local_d8 = local_198;
    gml_Script_draw_line_sprite(local_res8,local_res10,&local_2b8,2,&local_e0);
  }
  if (local_68 != 0) {
    FUN_140e4cd60();
    local_68 = 0;
  }
  if ((1 << ((byte)local_28c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_298);
  }
  if ((1 << ((byte)local_2ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_2b8);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  if ((1 << ((byte)uStack_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_25c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_268);
  }
  if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_258);
  }
  if ((1 << ((byte)uStack_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  _eh_vector_destructor_iterator_(local_218,0x10,9,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_288;
  return;
}

