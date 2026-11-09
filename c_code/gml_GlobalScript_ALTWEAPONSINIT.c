// gml_GlobalScript_ALTWEAPONSINIT @ 0x140211910

undefined8 *
gml_GlobalScript_ALTWEAPONSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined8 local_238;
  undefined4 uStack_230;
  undefined4 uStack_22c;
  undefined8 local_228;
  undefined4 local_220;
  undefined4 local_21c;
  undefined8 local_218;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined8 local_208;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  byte local_bc;
  undefined8 local_b8;
  byte local_ac;
  undefined8 local_a8;
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined8 *local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  
  local_160 = "gml_Script_add_hit_combo_on";
  local_168 = DAT_141dc7a50;
  local_158 = 2;
  DAT_141dc7a50 = &local_168;
  _eh_vector_constructor_iterator_(&local_c8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_17c = 0xffffff;
  local_188 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_1dc = 0xffffff;
  local_1e8 = 0;
  local_19c = 0xffffff;
  local_1a8 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  local_10c = 0xffffff;
  local_118 = 0;
  uStack_1ac = 0xffffff;
  local_1b8 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 3;
  puVar5 = &DAT_1419df7b0;
  if (param_4 < 1) {
    FUN_140e87170(&DAT_1419df7b0,DAT_141a0a808,0x80000000,&local_188,param_1,param_2);
    puVar4 = &DAT_1419df7b0;
  }
  else {
    FUN_140e87170(*param_5,DAT_141a0a808,0x80000000,&local_188,param_1,param_2);
    puVar4 = (undefined8 *)*param_5;
  }
  FUN_140e87170(puVar4,DAT_141a0a798,0x80000000,&local_d8,param_1,param_2);
  local_21c = local_17c;
  local_220 = local_180;
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
    local_228 = local_188;
  }
  else {
    FUN_1400419b0(&local_228,&local_188);
  }
  FUN_1400460e0(&local_228,&local_d8);
  uStack_1fc = local_21c;
  uStack_200 = local_220;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_208 = local_228;
  }
  else {
    FUN_1400419b0(&local_208,&local_228);
  }
  uStack_22c = 0;
  local_238 = 0x4000000000000000;
  FUN_140046500(&local_208,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_218 = local_208;
  uStack_210 = uStack_200;
  uStack_20c = uStack_1fc;
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  FUN_140041b80(&local_1d8,&local_218);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_158 = 4;
  if (param_4 < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*param_5;
  }
  uVar3 = param_1;
  FUN_140e87170(puVar4,DAT_141a0a788,0x80000000,&local_178,param_1,param_2);
  uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
  local_21c = local_16c;
  local_220 = local_170;
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) == 0) {
    local_228 = local_178;
  }
  else {
    FUN_1400419b0(&local_228,&local_178);
  }
  uStack_22c = 7;
  local_238 = CONCAT44(local_238._4_4_,0xc);
  FUN_1400462a0(&local_228,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  uStack_1fc = local_21c;
  uStack_200 = local_220;
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
    local_208 = local_228;
  }
  else {
    FUN_1400419b0(&local_208,&local_228);
  }
  uStack_22c = 7;
  local_238 = CONCAT44(local_238._4_4_,0x10);
  FUN_1400462a0(&local_208,&local_238);
  if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  local_218 = local_208;
  uStack_210 = uStack_200;
  uStack_20c = uStack_1fc;
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  FUN_140041b80(&local_1e8,&local_218);
  if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_208);
  }
  if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_228);
  }
  local_158 = 6;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  uStack_20c = 0xf;
  local_218 = 0x1000000000000ee;
  local_238 = 0x1000000000000ee;
  uStack_230 = uStack_210;
  uStack_22c = 0xf;
  if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_238);
  local_78 = &local_c8;
  uVar3 = FUN_140e634e0(param_1,param_2,&local_1f8,1,CONCAT44(uVar6,DAT_141a02ef8),&local_78);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    if (param_4 < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*param_5;
    }
    FUN_140e87170(puVar4,DAT_141a0a828,0x80000000,&local_1a8,param_1,param_2);
    uStack_22c = 0xf;
    local_238 = 0x1000000000000ee;
    FUN_140e87170(&local_238,DAT_141a0a828,0x80000000,&local_e8,param_1,param_2);
    if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_238);
    }
    iVar2 = FUN_140e851f0(&local_1a8,&local_e8,DAT_141955260,0);
    if (iVar2 != 0) {
      if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      local_198 = 0;
      local_190 = 0;
      local_18c = 5;
      if (param_4 < 1) {
        FUN_140e87170(&DAT_1419df7b0,DAT_1419fe0e8,0x80000000,&local_128,param_1,param_2);
        puVar4 = &DAT_1419df7b0;
      }
      else {
        FUN_140e87170(*param_5,DAT_1419fe0e8,0x80000000,&local_128,param_1,param_2);
        puVar4 = (undefined8 *)*param_5;
      }
      FUN_140e87170(puVar4,DAT_1419fe158,0x80000000,&local_f8,param_1,param_2);
      uStack_22c = 0xf;
      local_238 = 0x1000000000000ee;
      FUN_140e87170(&local_238,DAT_1419fe0e8,0x80000000,&local_138,param_1,param_2);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      uStack_22c = 0xf;
      local_238 = 0x1000000000000ee;
      uVar3 = param_1;
      FUN_140e87170(&local_238,DAT_1419fe158,0x80000000,&local_108,param_1,param_2);
      uVar6 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      local_218 = local_128;
      uStack_210 = uStack_120;
      uStack_20c = uStack_11c;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_b8);
      }
      FUN_140041b80(&local_b8,&local_218);
      local_70 = &local_b8;
      local_218 = local_f8;
      uStack_210 = uStack_f0;
      uStack_20c = uStack_ec;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_a8);
      }
      FUN_140041b80(&local_a8,&local_218);
      local_68 = &local_a8;
      local_218 = local_138;
      uStack_210 = uStack_130;
      uStack_20c = uStack_12c;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_218);
      local_60 = local_98;
      local_218 = local_108;
      uStack_210 = uStack_100;
      uStack_20c = uStack_fc;
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_218);
      local_58 = local_88;
      uVar3 = FUN_140e634e0(param_1,param_2,&local_198,4,CONCAT44(uVar6,DAT_1419fd548),&local_70);
      uStack_22c = 0;
      local_238 = 0x4050000000000000;
      iVar2 = FUN_140e851f0(uVar3,&local_238,DAT_141955260,1);
      if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_238);
      }
      if (iVar2 != -2 && iVar2 < 1) {
        local_158 = 8;
        uStack_22c = 0xf;
        local_238 = 0x1000000000000ee;
        FUN_140e87170(&local_238,DAT_1419fe0e8,0x80000000,&local_138,param_1,param_2);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_21c = local_1cc;
        local_220 = local_1d0;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
          local_228 = local_1d8;
        }
        else {
          FUN_1400419b0(&local_228,&local_1d8);
        }
        FUN_1400460e0(&local_228,&local_138);
        uStack_1fc = local_21c;
        uStack_200 = local_220;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
          local_208 = local_228;
        }
        else {
          FUN_1400419b0(&local_208,&local_228);
        }
        uStack_22c = 0;
        local_238 = 0x4000000000000000;
        FUN_140046500(&local_208,&local_238);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        local_218 = local_208;
        uStack_210 = uStack_200;
        uStack_20c = uStack_1fc;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        FUN_140041b80(&local_1d8,&local_218);
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        local_158 = 9;
        uStack_22c = 0xf;
        local_238 = 0x1000000000000ee;
        FUN_140e87170(&local_238,DAT_141a0a788,0x80000000,&local_118,param_1,param_2);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        uStack_1fc = local_1dc;
        uStack_200 = local_1e0;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) == 0) {
          local_208 = local_1e8;
        }
        else {
          FUN_1400419b0(&local_208,&local_1e8);
        }
        FUN_1400460e0(&local_208,&local_118);
        local_1bc = uStack_1fc;
        local_1c0 = uStack_200;
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) == 0) {
          local_1c8 = local_208;
        }
        else {
          FUN_1400419b0(&local_1c8,&local_208);
        }
        uStack_20c = 7;
        local_218 = CONCAT44(local_218._4_4_,0xc);
        FUN_1400462a0(&local_1c8,&local_218);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_21c = local_1bc;
        local_220 = local_1c0;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) == 0) {
          local_228 = local_1c8;
        }
        else {
          FUN_1400419b0(&local_228,&local_1c8);
        }
        uStack_20c = 7;
        local_218 = CONCAT44(local_218._4_4_,0x10);
        FUN_1400462a0(&local_228,&local_218);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        uStack_22c = local_21c;
        uStack_230 = local_220;
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) == 0) {
          local_238 = local_228;
        }
        else {
          FUN_1400419b0(&local_238,&local_228);
        }
        uStack_20c = 0;
        local_218 = 0x4000000000000000;
        FUN_140046500(&local_238,&local_218);
        if ((1 << ((byte)uStack_20c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_218);
        }
        local_218 = local_238;
        uStack_210 = uStack_230;
        uStack_20c = uStack_22c;
        if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        FUN_140041b80(&local_1e8,&local_218);
        if ((1 << ((byte)uStack_22c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_238);
        }
        if ((1 << ((byte)local_21c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_228);
        }
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        if ((1 << ((byte)uStack_1fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_208);
        }
      }
    }
  }
  local_158 = 0xc;
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  local_78 = &local_1d8;
  local_70 = &local_1e8;
  if (param_4 < 2) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)param_5[1];
    if (puVar4 == &local_a8) goto LAB_1402126d5;
  }
  local_218 = *puVar4;
  uStack_210 = *(undefined4 *)(puVar4 + 1);
  uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
  if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  FUN_140041b80(&local_a8,&local_218);
LAB_1402126d5:
  local_68 = &local_a8;
  puVar4 = (undefined8 *)
           gml_Script_anon_1077_ThrowAnimQueue_ALTWEAPONSINIT
                     (param_1,param_2,&local_1f8,3,&local_78);
  if (puVar4 != &local_1b8) {
    local_218 = *puVar4;
    uStack_210 = *(undefined4 *)(puVar4 + 1);
    uStack_20c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_218);
  }
  local_158 = 0xd;
  if (0 < param_4) {
    puVar5 = (undefined8 *)*param_5;
  }
  FUN_140e87170(puVar5,DAT_141a0a828,0x80000000,&local_1a8,param_1,param_2);
  uStack_22c = local_19c;
  uStack_230 = local_1a0;
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) == 0) {
    local_238 = local_1a8;
  }
  else {
    FUN_1400419b0(&local_238,&local_1a8);
  }
  uVar6 = uStack_22c;
  local_218 = local_238;
  uStack_210 = uStack_230;
  uStack_20c = uStack_22c;
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  FUN_140041b80(&local_150,&local_218);
  if ((1 << ((byte)uVar6 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_238);
  }
  FUN_140e87930(&local_1b8,DAT_141a0a768,0x80000000,&local_150);
  local_158 = 0xe;
  if (&local_1b8 != param_3) {
    local_218 = local_1b8;
    uStack_210 = uStack_1b0;
    uStack_20c = uStack_1ac;
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    FUN_140041b80(param_3,&local_218);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

