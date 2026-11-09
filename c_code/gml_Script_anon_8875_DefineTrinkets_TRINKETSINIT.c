// gml_Script_anon_8875_DefineTrinkets_TRINKETSINIT @ 0x1405e8d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_8875_DefineTrinkets_TRINKETSINIT
          (undefined8 param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5
          )

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined4 local_res18;
  code *pcVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  ulonglong in_stack_fffffffffffffe40;
  undefined1 **ppuVar10;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined1 local_88 [12];
  byte local_7c;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_res18 = 0;
  local_160 = "gml_Script_anon@8182@DefineTrinkets@TRINKETSINIT";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x12e;
  pcVar7 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(local_b8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  uStack_bc = 0xffffff;
  local_c8 = 0;
  local_18c = 0xffffff;
  local_198 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  uStack_ec = 0xffffff;
  local_f8 = 0;
  local_16c = 0xffffff;
  local_178 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  uStack_fc = 0xffffff;
  local_108 = 0;
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_144 = 0xffffff;
  local_150 = 0;
  local_19c = 0;
  local_1a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x130;
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 == '\0') {
    local_158 = 0x130;
  }
  else {
    local_158 = 0x132;
    puVar6 = &DAT_1419df7b0;
    if (param_4 < 1) {
      puVar5 = &DAT_1419df7b0;
    }
    else {
      puVar5 = (undefined8 *)*param_5;
    }
    in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
    uVar8 = (ulonglong)pcVar7 & 0xffffffffffffff00;
    FUN_140e87440(puVar5,DAT_1419f5d38,0x80000000,&local_c8,uVar8,in_stack_fffffffffffffe40);
    local_1b8 = local_c8;
    uStack_1b0 = uStack_c0;
    uStack_1ac = uStack_bc;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1b8);
    local_158 = 0x133;
    if (0 < param_4) {
      puVar6 = (undefined8 *)*param_5;
    }
    in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(puVar6,DAT_1419f5e68,0x80000000,&local_d8,uVar8,in_stack_fffffffffffffe40);
    local_1b8 = local_d8;
    uStack_1b0 = uStack_d0;
    uStack_1ac = uStack_cc;
    if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_140);
    }
    FUN_140041b80(&local_140,&local_1b8);
    local_158 = 0x135;
    if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1a8);
    }
    local_1a8 = 0;
    local_1a0 = 0;
    local_19c = 5;
    uStack_1ac = 0xf;
    local_1b8 = 0x100000000000106;
    in_stack_fffffffffffffe40 = in_stack_fffffffffffffe40 & 0xffffffffffffff00;
    uVar8 = uVar8 & 0xffffffffffffff00;
    FUN_140e87440(&local_1b8,DAT_1419f5a98,0x80000000,&local_e8,uVar8,in_stack_fffffffffffffe40);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    uStack_1ac = 0xf;
    local_1b8 = 0x1000000000000ee;
    FUN_140e87440(&local_1b8,DAT_1419f5a58,0x80000000,&local_f8,uVar8 & 0xffffffffffffff00,
                  in_stack_fffffffffffffe40 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1b8 = local_f8;
    uStack_1b0 = uStack_f0;
    uStack_1ac = uStack_ec;
    if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_b8);
    }
    FUN_140041b80(local_b8,&local_1b8);
    local_78 = local_b8;
    uStack_1ac = 0xf;
    local_1b8 = 0x100000000000106;
    uVar4 = FUN_140069500(&local_1b8);
    ppuVar10 = &local_78;
    puVar6 = &local_e8;
    puVar5 = (undefined8 *)FUN_140e63610(uVar4,local_res10,&local_1a8,1,&local_e8,ppuVar10);
    if (puVar5 != &local_178) {
      local_188 = *(undefined4 *)puVar5;
      uStack_184 = *(undefined4 *)((longlong)puVar5 + 4);
      uStack_180 = *(undefined4 *)(puVar5 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_188);
    }
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_158 = 0x136;
    uStack_1ac = local_18c;
    uStack_1b0 = local_190;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) == 0) {
      local_1b8 = local_198;
    }
    else {
      FUN_1400419b0(&local_1b8,&local_198);
    }
    local_res18 = 1;
    FUN_1400460e0(&local_1b8,&local_140);
    uVar2 = FUN_140e851f0(&local_1b8,&local_178,DAT_141955260,1);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if (((uVar2 < 0x80000000) &&
        (iVar3 = FUN_140e851f0(&local_198,&local_178,DAT_141955260,1), iVar3 != -2)) && (iVar3 < 0))
    {
      local_158 = 0x138;
      uStack_1ac = 0xf;
      local_1b8 = 0x1000000000000ee;
      FUN_140e87440(&local_1b8,DAT_1419ff9c8,0x80000000,&local_130,
                    (ulonglong)puVar6 & 0xffffffffffffff00,(ulonglong)ppuVar10 & 0xffffffffffffff00)
      ;
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      FUN_140162d40(&local_130,1);
      uStack_1ac = 0xf;
      local_1b8 = 0x1000000000000ee;
      FUN_140e87930(&local_1b8,DAT_1419ff9c8,0x80000000,&local_130);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_158 = 0x13a;
      if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      local_1a8 = 0;
      local_1a0 = 0;
      local_19c = 5;
      uStack_1ac = 0xf;
      local_1b8 = 0x1000000000000ee;
      FUN_140e87170(&local_1b8,DAT_1419fe0e8,0x80000000,&local_108,local_res8,local_res10);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      uStack_1ac = 0xf;
      local_1b8 = 0x1000000000000ee;
      uVar4 = local_res8;
      FUN_140e87170(&local_1b8,DAT_1419fe158,0x80000000,&local_118,local_res8,local_res10);
      uVar9 = (undefined4)((ulonglong)uVar4 >> 0x20);
      if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_188 = (undefined4)local_108;
      uStack_184 = local_108._4_4_;
      uStack_180 = uStack_100;
      uStack_17c = uStack_fc;
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_188);
      local_78 = local_b8;
      local_188 = (undefined4)local_118;
      uStack_184 = local_118._4_4_;
      uStack_180 = uStack_110;
      uStack_17c = uStack_10c;
      if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_a8);
      }
      FUN_140041b80(local_a8,&local_188);
      local_70 = local_a8;
      local_188 = _DAT_141dd4d78;
      uStack_184 = uRam0000000141dd4d7c;
      uStack_180 = uRam0000000141dd4d80;
      uStack_17c = DAT_141dd4d84;
      if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_98);
      }
      FUN_140041b80(local_98,&local_188);
      local_68 = local_98;
      uStack_1ac = 0xf;
      local_1b8 = 0x10000000000012d;
      local_188 = 0x12d;
      uStack_184 = 0x1000000;
      uStack_180 = uStack_1b0;
      uStack_17c = 0xf;
      if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_188);
      local_60 = local_88;
      uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1a8,4,CONCAT44(uVar9,DAT_141a0a7c8),
                            &local_78);
      iVar3 = FUN_140e63cb0(local_58,&local_res8,&local_res10,uVar4);
      if (0 < iVar3) {
        do {
          local_158 = 0x13c;
          uStack_1ac = 0xf;
          local_1b8 = 0x100000100000067;
          local_188 = 0x67;
          uStack_184 = 0x1000001;
          uStack_180 = uStack_1b0;
          uStack_17c = 0xf;
          if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_150);
          }
          FUN_140041b80(&local_150,&local_188);
          FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_150);
          cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
        } while (cVar1 != '\0');
      }
      FUN_140e63970(local_58,&local_res8,&local_res10);
      if (local_48 != 0) {
        FUN_140e4cd60();
      }
    }
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_144 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_150);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)uStack_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)uStack_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(local_b8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

