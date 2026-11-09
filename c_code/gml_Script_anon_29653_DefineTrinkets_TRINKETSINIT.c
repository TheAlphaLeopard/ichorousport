// gml_Script_anon_29653_DefineTrinkets_TRINKETSINIT @ 0x1406074f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_29653_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined8 **ppuVar10;
  ulonglong uVar11;
  undefined8 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined8 local_1d8;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 local_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 *local_158;
  undefined8 *local_150;
  undefined1 *local_148;
  undefined1 *local_140;
  undefined1 *local_138;
  undefined1 *local_130;
  undefined8 *local_128;
  undefined8 local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 *local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98 [2];
  undefined8 local_88 [2];
  undefined1 local_78 [16];
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 local_58 [12];
  byte local_4c;
  undefined1 local_48 [12];
  byte local_3c;
  
  local_1a0 = "gml_Script_anon@28824@DefineTrinkets@TRINKETSINIT";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x42b;
  uVar4 = 1;
  _eh_vector_constructor_iterator_(local_98,0x10,7,FUN_1400424d0,FUN_140041b30);
  local_1ac = 0xffffff;
  local_1b8 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  uStack_ac = 0xffffff;
  local_b8 = 0;
  uStack_bc = 0xffffff;
  local_c8 = 0;
  uStack_cc = 0xffffff;
  local_d8 = 0;
  uStack_dc = 0xffffff;
  local_e8 = 0;
  local_1bc = 0xffffff;
  local_1c8 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = (undefined8 *)0x0;
  uVar5 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a1f1b0);
  uStack_10c = 0xffffff;
  local_118 = 0;
  local_1ec = 0;
  local_1f8 = 0;
  local_184 = 0;
  local_190 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x42c;
  uVar11 = 0;
  uVar8 = CONCAT44(uVar4,DAT_1419ef5d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1f8,0,uVar8,0);
  if (puVar6 != &local_1b8) {
    local_1d8 = *puVar6;
    uStack_1d0 = *(undefined4 *)(puVar6 + 1);
    uStack_1cc = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    FUN_140041b80(&local_1b8,&local_1d8);
  }
  local_198 = 0x42d;
  uStack_1dc = 0xf;
  local_1e8 = 0x1000000000000ee;
  uVar11 = uVar11 & 0xffffffffffffff00;
  uVar8 = uVar8 & 0xffffffffffffff00;
  FUN_140e87440(&local_1e8,DAT_141a0a738,0x80000000,&local_a8,uVar8,uVar11);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uStack_1dc = 0;
  local_1e8 = 0x4059000000000000;
  iVar2 = FUN_140e851f0(&local_a8,&local_1e8,DAT_141955260,1);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  uVar3 = 1 << ((byte)local_1ec & 0x1f);
  if (iVar2 == -2 || 0 < iVar2) {
    local_198 = 0x42e;
    if ((uVar3 & 0x46) != 0) {
      FUN_140041a50(&local_1f8);
    }
    local_1f8 = 0;
    local_1f0 = 0;
    local_1ec = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5948);
    FUN_140e87440(uVar7,DAT_1419f5f98,0x80000000,&local_168,uVar8 & 0xffffffffffffff00,
                  uVar11 & 0xffffffffffffff00);
    plVar9 = param_1;
    uVar8 = param_2;
    FUN_140e87170(&local_168,DAT_1419fe0e8,0x80000000,&local_b8,param_1,param_2);
    FUN_140e87440(uVar7,DAT_1419f5f98,0x80000000,&local_168,(ulonglong)plVar9 & 0xffffffffffffff00,
                  uVar8 & 0xffffffffffffff00);
    FUN_140e87170(&local_168,DAT_1419fe158,0x80000000,&local_c8,param_1,param_2);
    uStack_1dc = 0xf;
    local_1e8 = 0x1000000000000ee;
    FUN_140e87170(&local_1e8,DAT_1419fe0e8,0x80000000,&local_d8,param_1,param_2);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    uStack_1dc = 0xf;
    local_1e8 = 0x1000000000000ee;
    FUN_140e87170(&local_1e8,DAT_1419fe158,0x80000000,&local_e8,param_1,param_2);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_1d8 = local_b8;
    uStack_1d0 = uStack_b0;
    uStack_1cc = uStack_ac;
    if ((1 << ((byte)local_98[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_98);
    }
    FUN_140041b80(local_98,&local_1d8);
    local_158 = local_98;
    local_1d8 = local_c8;
    uStack_1d0 = uStack_c0;
    uStack_1cc = uStack_bc;
    if ((1 << ((byte)local_88[1]._4_4_ & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_88);
    }
    FUN_140041b80(local_88,&local_1d8);
    local_150 = local_88;
    local_1d8 = local_d8;
    uStack_1d0 = uStack_d0;
    uStack_1cc = uStack_cc;
    if ((1 << (local_78[0xc] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_78);
    }
    FUN_140041b80(local_78,&local_1d8);
    local_148 = local_78;
    local_1d8 = local_e8;
    uStack_1d0 = uStack_e0;
    uStack_1cc = uStack_dc;
    if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_68);
    }
    FUN_140041b80(local_68,&local_1d8);
    local_140 = local_68;
    uStack_1dc = 0xf;
    local_1e8 = 0x10000000000009d;
    local_1d8 = 0x10000000000009d;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = 0xf;
    if ((1 << (local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(local_58,&local_1d8);
    local_138 = local_58;
    local_1d8 = CONCAT44(uRam00000001419e6ac4,_DAT_1419e6ac0);
    uStack_1d0 = uRam00000001419e6ac8;
    uStack_1cc = uRam00000001419e6acc;
    if ((1 << (local_3c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_48);
    }
    FUN_140041b80(local_48,&local_1d8);
    local_130 = local_48;
    local_128 = &local_1b8;
    ppuVar10 = &local_158;
    gml_Script_collision_real(param_1,param_2,&local_1f8,7,ppuVar10);
    local_198 = 0x42f;
    while( true ) {
      uVar4 = (undefined4)((ulonglong)ppuVar10 >> 0x20);
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      local_158 = &local_1b8;
      uVar8 = CONCAT44(uVar4,DAT_1419f58d8);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_1f8,1,uVar8,&local_158);
      cVar1 = FUN_140e491e0(uVar7);
      uVar4 = (undefined4)(uVar8 >> 0x20);
      if (cVar1 != '\0') break;
      local_198 = 0x430;
      if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_190);
      }
      local_190 = 0;
      local_188 = 0;
      local_184 = 5;
      local_150 = &local_1b8;
      local_178 = _DAT_141dc6760;
      uStack_174 = uRam0000000141dc6764;
      uStack_170 = uRam0000000141dc6768;
      uStack_16c = uRam0000000141dc676c;
      if ((1 << (local_78[0xc] & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_78);
      }
      FUN_140041b80(local_78,&local_178);
      local_148 = local_78;
      uVar7 = CONCAT44(uVar4,DAT_1419f5a78);
      puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_190,2,uVar7,&local_150);
      uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
      if (puVar6 != &local_1c8) {
        local_178 = *(undefined4 *)puVar6;
        uStack_174 = *(undefined4 *)((longlong)puVar6 + 4);
        uStack_170 = *(undefined4 *)(puVar6 + 1);
        uStack_16c = *(undefined4 *)((longlong)puVar6 + 0xc);
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        FUN_140041b80(&local_1c8,&local_178);
      }
      local_198 = 0x431;
      if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1f8);
      }
      local_1f8 = 0;
      local_1f0 = 0;
      local_1ec = 5;
      local_158 = &local_1b8;
      local_178 = _DAT_141dc6760;
      uStack_174 = uRam0000000141dc6764;
      uStack_170 = uRam0000000141dc6768;
      uStack_16c = uRam0000000141dc676c;
      if ((1 << ((byte)local_88[1]._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_88);
      }
      FUN_140041b80(local_88,&local_178);
      local_150 = local_88;
      ppuVar10 = &local_158;
      uVar8 = CONCAT44(uVar4,DAT_1419f5938);
      FUN_140e634e0(param_1,param_2,&local_1f8,2,uVar8,ppuVar10);
      local_198 = 0x432;
      uVar11 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
      ppuVar10 = (undefined8 **)(uVar8 & 0xffffffffffffff00);
      FUN_140e87440(&local_1c8,DAT_141a56cd0,0x80000000,&local_f8,ppuVar10,uVar11);
      uStack_1dc = 10;
      local_1e8 = 2;
      iVar2 = FUN_140e851f0(&local_f8,&local_1e8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if (iVar2 == 0) {
        local_198 = 0x432;
      }
      else {
        local_198 = 0x433;
        if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1f8);
        }
        local_1f8 = 0;
        local_1f0 = 0;
        local_1ec = 5;
        uVar11 = uVar11 & 0xffffffffffffff00;
        uVar8 = (ulonglong)ppuVar10 & 0xffffffffffffff00;
        FUN_140e87440(&local_1c8,DAT_141a1edd0,0x80000000,&local_108,uVar8,uVar11);
        FUN_140e87440(uVar5,DAT_1419f6028,0x80000000,&local_118,uVar8 & 0xffffffffffffff00,
                      uVar11 & 0xffffffffffffff00);
        local_178 = (undefined4)local_118;
        uStack_174 = local_118._4_4_;
        uStack_170 = uStack_110;
        uStack_16c = uStack_10c;
        if ((1 << ((byte)local_98[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_178);
        local_158 = local_98;
        uStack_1cc = 0xf;
        local_1d8 = 0x1000000000000ee;
        local_178 = 0xee;
        uStack_174 = 0x1000000;
        uStack_170 = uStack_1d0;
        uStack_16c = 0xf;
        if ((1 << ((byte)local_88[1]._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_88);
        }
        FUN_140041b80(local_88,&local_178);
        local_150 = local_88;
        switch(local_1bc) {
        default:
switchD_140607e51_caseD_1:
          uVar7 = 0;
          break;
        case 6:
          uVar7 = local_1c8;
          break;
        case 0xf:
          iVar2 = (int)((ulonglong)local_1c8 >> 0x20);
          if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140607e51_caseD_1;
        case 0:
        case 7:
        case 10:
        case 0xd:
          uVar4 = FUN_140e4a8b0(&local_1c8);
          uVar7 = FUN_140e87250(uVar4);
        }
        ppuVar10 = &local_108;
        FUN_140e63610(uVar7,param_2,&local_1f8,2,ppuVar10,&local_158);
      }
    }
    local_198 = 0x435;
    uVar3 = 1 << ((byte)local_1ec & 0x1f);
  }
  else {
    local_198 = 0x42d;
  }
  uVar4 = (undefined4)(uVar8 >> 0x20);
  if ((uVar3 & 0x46) != 0) {
    FUN_140041a50(&local_1f8);
  }
  local_158 = &local_1b8;
  local_1f8 = 0;
  local_1f0 = 0;
  local_1ec = 5;
  FUN_140e634e0(param_1,param_2,&local_1f8,1,CONCAT44(uVar4,DAT_1419f6038),&local_158);
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)local_1ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1f8);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1b8);
  }
  _eh_vector_destructor_iterator_(local_98,0x10,7,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

