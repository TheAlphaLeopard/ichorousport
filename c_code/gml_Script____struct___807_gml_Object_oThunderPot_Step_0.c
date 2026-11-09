// gml_Script____struct___807_gml_Object_oThunderPot_Step_0 @ 0x140db5e90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___807_gml_Object_oThunderPot_Step_0
          (ulonglong param_1,ulonglong param_2,undefined8 *param_3,undefined4 param_4,
          undefined8 param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  byte local_res20;
  code *pcVar15;
  ulonglong uVar16;
  undefined4 uVar17;
  ulonglong in_stack_fffffffffffffda0;
  undefined1 **ppuVar18;
  ulonglong uVar19;
  undefined8 local_258;
  undefined4 uStack_250;
  undefined4 uStack_24c;
  undefined8 local_248;
  undefined4 local_240;
  undefined4 local_23c;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  double local_218;
  undefined4 local_20c;
  undefined8 local_208;
  char *local_200;
  undefined4 local_1f8;
  undefined8 local_1f0;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  double local_1c8;
  uint local_1bc;
  double local_1b8;
  uint local_1ac;
  double local_1a8;
  uint local_19c;
  double local_198;
  uint local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined8 local_128;
  byte local_11c;
  double local_118;
  byte local_10c;
  double local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined1 *local_b8;
  undefined8 *local_b0;
  double *local_a8;
  double *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined8 *local_80;
  uint local_78 [2];
  undefined8 *local_70;
  
  local_200 = "gml_Script_anon@1025@gml_Object_oThunderPot_Step_0";
  local_208 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_208;
  local_1f8 = 0x24;
  FUN_140041df0(local_78,param_4,1,param_5);
  pcVar15 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_138,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_22c = 0xffffff;
  local_238 = 0;
  local_18c = 0xffffff;
  local_198 = 0.0;
  local_19c = 0xffffff;
  local_1a8 = 0.0;
  local_1ac = 0xffffff;
  local_1b8 = 0.0;
  local_1bc = 0xffffff;
  local_1c8 = 0.0;
  local_20c = 0xffffff;
  local_218 = 0.0;
  local_13c = 0xffffff;
  local_148 = 0;
  uStack_1cc = 0xffffff;
  local_1d8 = 0;
  local_188 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1ef20);
  uStack_14c = 0xffffff;
  local_158 = 0;
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a016c8);
  uStack_15c = 0xffffff;
  local_168 = 0;
  uStack_16c = 0xffffff;
  local_178 = 0;
  local_23c = 0;
  local_248 = 0;
  local_res20 = 0;
  bVar1 = local_res20;
  local_res20 = 0;
  local_1e4 = 0;
  local_1f0 = 0;
  local_21c = 0;
  local_228 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_1f8 = 0x24;
  puVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_78[0];
  if ((int)local_78[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_70;
  }
  iVar3 = FUN_140e851f0(puVar7,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_1f8 = 0x24;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    if ((int)local_78[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_70;
    }
    in_stack_fffffffffffffda0 = 0;
    pcVar15 = (code *)CONCAT44((int)((ulonglong)pcVar15 >> 0x20),DAT_1419fd6d8);
    puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_248,0,pcVar15,0);
    if (puVar5 != puVar7) {
      local_258 = *puVar5;
      uStack_250 = *(undefined4 *)(puVar5 + 1);
      uStack_24c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar7);
      }
      FUN_140041b80(puVar7,&local_258);
    }
  }
  local_1f8 = 0x25;
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  local_248 = 0;
  local_240 = 0;
  local_23c = 5;
  if ((int)local_78[0] < 1) {
    puVar7 = &DAT_1419df7b0;
  }
  else {
    puVar7 = (undefined8 *)*local_70;
  }
  uVar16 = (ulonglong)pcVar15 & 0xffffffffffffff00;
  FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_238,uVar16,
                in_stack_fffffffffffffda0 & 0xffffffffffffff00);
  uVar17 = (undefined4)(uVar16 >> 0x20);
  local_258 = local_238;
  uStack_250 = uStack_230;
  uStack_24c = uStack_22c;
  if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_138);
  }
  FUN_140041b80(local_138,&local_258);
  local_b8 = local_138;
  uVar6 = FUN_140e634e0(param_1,param_2,&local_248,1,CONCAT44(uVar17,DAT_141a02ef8),&local_b8);
  cVar2 = FUN_140e491e0(uVar6);
  if (cVar2 == '\0') {
    local_1f8 = 0x25;
  }
  else {
    local_1f8 = 0x26;
    if ((int)local_78[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_70;
    }
    FUN_140e87170(puVar7,DAT_1419fe0e8,0x80000000,&local_198,param_1,param_2);
    if ((int)local_78[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_70;
    }
    uVar16 = param_1;
    uVar19 = param_2;
    FUN_140e87170(puVar7,DAT_1419fe158,0x80000000,&local_1a8,param_1,param_2);
    if ((int)local_78[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_70;
    }
    FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_238,uVar16 & 0xffffffffffffff00,
                  uVar19 & 0xffffffffffffff00);
    uVar16 = param_1;
    uVar19 = param_2;
    FUN_140e87170(&local_238,DAT_1419fe0e8,0x80000000,&local_1b8,param_1,param_2);
    if ((int)local_78[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_70;
    }
    FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_238,uVar16 & 0xffffffffffffff00,
                  uVar19 & 0xffffffffffffff00);
    uVar16 = param_1;
    uVar19 = param_2;
    FUN_140e87170(&local_238,DAT_1419fe158,0x80000000,&local_1c8,param_1,param_2);
    dVar11 = local_1c8;
    if ((local_1bc & 0xffffff) != 0) {
      dVar11 = (double)FUN_140e4b060(&local_1c8);
    }
    dVar12 = local_1b8;
    if ((local_1ac & 0xffffff) != 0) {
      dVar12 = (double)FUN_140e4b060(&local_1b8);
    }
    dVar13 = local_1a8;
    if ((local_19c & 0xffffff) != 0) {
      dVar13 = (double)FUN_140e4b060(&local_1a8);
    }
    dVar14 = local_198;
    if ((local_18c & 0xffffff) != 0) {
      dVar14 = (double)FUN_140e4b060(&local_198);
    }
    fVar10 = (float)FUN_140e793d0((float)dVar14,(float)dVar13,(float)dVar12,(float)dVar11);
    if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_218);
    }
    local_20c = 0;
    local_218 = (double)fVar10;
    local_1f8 = 0x27;
    if ((int)local_78[0] < 1) {
      puVar7 = &DAT_1419df7b0;
    }
    else {
      puVar7 = (undefined8 *)*local_70;
    }
    FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_238,uVar16 & 0xffffffffffffff00,
                  uVar19 & 0xffffffffffffff00);
    uVar16 = param_1;
    uVar19 = param_2;
    FUN_140e87170(&local_238,DAT_141a1f580,0x80000000,&local_148,param_1,param_2);
    uStack_24c = 0xf;
    local_258 = 0x1000000000000ee;
    iVar3 = FUN_140e851f0(&local_148,&local_258,DAT_141955260,0);
    if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_258);
    }
    local_res20 = bVar1;
    if (iVar3 != 0) {
      if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_248);
      }
      local_248 = 0;
      local_240 = 0;
      local_23c = 5;
      if ((int)local_78[0] < 1) {
        puVar7 = &DAT_1419df7b0;
      }
      else {
        puVar7 = (undefined8 *)*local_70;
      }
      uVar16 = uVar16 & 0xffffffffffffff00;
      FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_1d8,uVar16,uVar19 & 0xffffffffffffff00);
      uVar17 = (undefined4)(uVar16 >> 0x20);
      local_258 = local_1d8;
      uStack_250 = uStack_1d0;
      uStack_24c = uStack_1cc;
      if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_138);
      }
      FUN_140041b80(local_138,&local_258);
      local_b8 = local_138;
      ppuVar18 = &local_b8;
      uVar16 = CONCAT44(uVar17,DAT_141a02ef8);
      uVar6 = FUN_140e634e0(param_1,param_2,&local_248,1,uVar16,ppuVar18);
      cVar2 = FUN_140e491e0(uVar6);
      if (cVar2 != '\0') {
        local_1f8 = 0x28;
        local_1f0 = 0;
        local_1e8 = 0;
        local_1e4 = 5;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_228 = 0;
        local_220 = 0;
        local_21c = 5;
        uVar19 = (ulonglong)ppuVar18 & 0xffffffffffffff00;
        uVar16 = uVar16 & 0xffffffffffffff00;
        FUN_140e87440(local_188,DAT_1419eef58,0x80000000,&local_158,uVar16,uVar19);
        if ((int)local_78[0] < 1) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)*local_70;
        }
        uVar19 = uVar19 & 0xffffffffffffff00;
        uVar16 = uVar16 & 0xffffffffffffff00;
        FUN_140e87440(puVar7,DAT_141a1f440,0x80000000,&local_238,uVar16,uVar19);
        if ((int)local_78[0] < 1) {
          puVar7 = &DAT_1419df7b0;
        }
        else {
          puVar7 = (undefined8 *)*local_70;
        }
        FUN_140e87440(puVar7,DAT_141a1f4e0,0x80000000,&local_1d8,uVar16 & 0xffffffffffffff00,
                      uVar19 & 0xffffffffffffff00);
        uVar16 = param_1;
        uVar19 = param_2;
        FUN_140e87170(&local_1d8,DAT_141a0a828,0x80000000,&local_168,param_1,param_2);
        if (0 < (int)local_78[0]) {
          puVar8 = (undefined8 *)*local_70;
        }
        uVar16 = uVar16 & 0xffffffffffffff00;
        FUN_140e87440(puVar8,DAT_141a0a7d8,0x80000000,&local_178,uVar16,uVar19 & 0xffffffffffffff00)
        ;
        uVar17 = (undefined4)(uVar16 >> 0x20);
        FUN_140e609c0(DAT_141a729d8);
        FUN_140e645a0(&local_258,gml_Script_anon_2310_gml_Object_oThunderPot_Step_0,0);
        if (&local_258 != puVar4) {
          local_188 = local_258;
          uStack_180 = uStack_250;
          uStack_17c = uStack_24c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar4);
          }
          FUN_140041b80(puVar4,&local_188);
        }
        FUN_140e60910(1);
        if (puVar4 != &local_128) {
          local_188 = *puVar4;
          uStack_180 = *(undefined4 *)(puVar4 + 1);
          uStack_17c = *(undefined4 *)((longlong)puVar4 + 0xc);
          if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          FUN_140041b80(&local_128,&local_188);
        }
        if ((1 << ((byte)uStack_24c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_258);
        }
        local_b0 = &local_128;
        local_258 = local_238;
        uStack_250 = uStack_230;
        uStack_24c = uStack_22c;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_258);
        local_a8 = &local_118;
        local_a0 = &local_218;
        local_258 = local_168;
        uStack_250 = uStack_160;
        uStack_24c = uStack_15c;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_258);
        local_98 = local_f8;
        local_258 = local_178;
        uStack_250 = uStack_170;
        uStack_24c = uStack_16c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_258);
        local_90 = local_e8;
        local_258 = local_158;
        uStack_250 = uStack_150;
        uStack_24c = uStack_14c;
        if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_d8);
        }
        FUN_140041b80(local_d8,&local_258);
        local_88 = local_d8;
        puVar8 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_228,5,CONCAT44(uVar17,DAT_1419fd6d8),&local_b0
                              );
        if (puVar8 != &local_c8) {
          local_258 = *puVar8;
          uStack_250 = *(undefined4 *)(puVar8 + 1);
          uStack_24c = *(undefined4 *)((longlong)puVar8 + 0xc);
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c8);
          }
          FUN_140041b80(&local_c8,&local_258);
        }
        local_80 = &local_c8;
        gml_Script___remove_listener_from_signal_anon_1472_SignalController_SIGNALS
                  (param_1,param_2,&local_1f0,2,&local_88);
        local_res20 = (byte)local_1e4;
      }
    }
    local_1f8 = 0x29;
    if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_248);
    }
    local_248 = 0;
    local_240 = 0;
    local_23c = 5;
    local_258 = CONCAT44(uRam00000001419ee0f4,_DAT_1419ee0f0);
    uStack_250 = uRam00000001419ee0f8;
    uStack_24c = uRam00000001419ee0fc;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_258);
    local_b8 = local_138;
    local_258 = CONCAT44(uRam00000001419ee104,_DAT_1419ee100);
    uStack_250 = uRam00000001419ee108;
    uStack_24c = uRam00000001419ee10c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    FUN_140041b80(&local_128,&local_258);
    local_b0 = &local_128;
    local_a8 = &local_218;
    local_258 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
    uStack_250 = DAT_1419df7b8;
    uStack_24c = DAT_1419df7bc;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    FUN_140041b80(&local_108,&local_258);
    local_a0 = &local_108;
    FUN_14044e5b0(param_1,param_2,&local_248,4,&local_b8);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  if ((1 << (local_res20 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f0);
  }
  if ((1 << ((byte)local_23c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_248);
  }
  if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_20c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_218);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  _eh_vector_destructor_iterator_(local_138,0x10,8,FUN_140041b30);
  if (0 < (int)local_78[0]) {
    puVar8 = local_70;
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
  FUN_140e4cd60(local_70);
  DAT_141dc7a50 = (undefined8 *)local_208;
  return param_3;
}

