// gml_Script_anon_37278_DefineTrinkets_TRINKETSINIT @ 0x1406135e0

undefined8 *
gml_Script_anon_37278_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,ulonglong param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 **ppuVar4;
  uint *puVar5;
  longlong *local_res8;
  ulonglong local_res10;
  undefined4 local_res18;
  code *pcVar6;
  undefined4 uVar9;
  longlong *plVar7;
  ulonglong uVar8;
  ulonglong in_stack_fffffffffffffe10;
  ulonglong uVar10;
  undefined8 local_1e8;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  uint local_1d8;
  uint uStack_1d4;
  uint uStack_1d0;
  uint uStack_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined1 *local_178;
  undefined4 local_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_c8 [12];
  byte local_bc;
  uint local_b8 [3];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  undefined1 *local_70;
  uint *local_68;
  undefined1 *local_60;
  undefined1 local_58 [16];
  longlong local_48;
  
  local_res18 = 0;
  local_160 = "gml_Script_anon@36590@DefineTrinkets@TRINKETSINIT";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x51c;
  pcVar6 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_118,0x10,8,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_17c = 0xffffff;
  local_188 = 0;
  local_1bc = 0;
  local_1c8 = 0;
  local_18c = 0;
  local_198 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_19c = 0;
  local_1a8 = 0xc010000000000000;
  local_16c = 0;
  local_178 = &DAT_bff0000000000000;
  local_158 = 0x51f;
  uStack_1dc = 0xf;
  local_1e8 = 0x10000000000009d;
  iVar2 = FUN_140e63cb0(local_58,&local_res8,&local_res10,&local_1e8);
  if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1e8);
  }
  if (0 < iVar2) {
    do {
      local_158 = 0x520;
      uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a56cd0);
      uStack_1dc = 10;
      local_1e8 = 2;
      iVar2 = FUN_140e851f0(uVar3,&local_1e8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if (iVar2 == 0) {
        local_158 = 0x520;
      }
      else {
        local_158 = 0x521;
        uVar3 = (**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
        iVar2 = FUN_140e851f0(uVar3,&local_178,DAT_141955260,1);
        if (0 < iVar2) {
          local_158 = 0x521;
          ppuVar4 = (undefined1 **)(**(code **)(*local_res8 + 8))(local_res8,DAT_141a1f090);
          if (ppuVar4 != &local_178) {
            local_1d8 = *(uint *)ppuVar4;
            uStack_1d4 = *(undefined4 *)((longlong)ppuVar4 + 4);
            uStack_1d0 = *(uint *)(ppuVar4 + 1);
            uStack_1cc = *(undefined4 *)((longlong)ppuVar4 + 0xc);
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            FUN_140041b80(&local_178,&local_1d8);
          }
          uStack_1ac = 6;
          local_1b8 = local_res8;
          in_stack_fffffffffffffe10 = in_stack_fffffffffffffe10 & 0xffffffffffffff00;
          pcVar6 = (code *)((ulonglong)pcVar6 & 0xffffffffffffff00);
          FUN_140e87440(&local_1b8,DAT_141a0a828,0x80000000,&local_128,pcVar6,
                        in_stack_fffffffffffffe10);
          if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1d8 = (uint)local_128;
          uStack_1d4 = local_128._4_4_;
          uStack_1d0 = uStack_120;
          uStack_1cc = uStack_11c;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1d8);
        }
      }
      cVar1 = FUN_140e643f0(local_58,&local_res8,&local_res10);
    } while (cVar1 != '\0');
  }
  uVar9 = (undefined4)((ulonglong)pcVar6 >> 0x20);
  FUN_140e63970(local_58,&local_res8,&local_res10);
  local_158 = 0x523;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_98 = &local_1a8;
  uVar3 = FUN_140e634e0(local_res8,local_res10,&local_1c8,1,CONCAT44(uVar9,DAT_141a02ef8),&local_98)
  ;
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_158 = 0x523;
  }
  else {
    local_158 = 0x525;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    local_198 = 0;
    local_190 = 0;
    local_18c = 5;
    FUN_140e87170(&local_1a8,DAT_1419fe0e8,0x80000000,&local_138,local_res8,local_res10);
    plVar7 = local_res8;
    uVar10 = local_res10;
    FUN_140e87170(&local_1a8,DAT_1419fe158,0x80000000,&local_148,local_res8,local_res10);
    if (param_4 < 1) {
      param_5 = &DAT_1419df7b0;
    }
    else {
      param_5 = (undefined8 *)*param_5;
    }
    uVar8 = (ulonglong)plVar7 & 0xffffffffffffff00;
    FUN_140e87440(param_5,DAT_141a0a7d8,0x80000000,&local_188,uVar8,uVar10 & 0xffffffffffffff00);
    uVar9 = (undefined4)(uVar8 >> 0x20);
    local_1d8 = DAT_141a575a0 & 0xffffff;
    uStack_1d4 = (int)(DAT_141a575a0 | 0x5000000) >> 0x18 & 0xff;
    if (uStack_1d4 == 0xf) {
      uStack_1d4 = 0x4000004;
    }
    else {
      uStack_1d4 = uStack_1d4 | 0x1000000;
    }
    uStack_1ac = 0xf;
    local_1b8 = (longlong *)(CONCAT44(uStack_1d4,DAT_141a575a0) & 0xffffffff00ffffff);
    uStack_1d0 = uStack_1b0;
    uStack_1cc = 0xf;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    FUN_140041b80(&local_118,&local_1d8);
    local_1d8 = (uint)local_138;
    uStack_1d4 = local_138._4_4_;
    uStack_1d0 = uStack_130;
    uStack_1cc = uStack_12c;
    local_98 = &local_118;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_1d8);
    local_90 = local_108;
    local_1d8 = (uint)local_148;
    uStack_1d4 = local_148._4_4_;
    uStack_1d0 = uStack_140;
    uStack_1cc = uStack_13c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_1d8);
    local_88 = local_f8;
    uStack_1ac = 0xf;
    local_1b8 = (longlong *)0x1000000000000ee;
    local_1d8 = 0xee;
    uStack_1d4 = 0x1000000;
    uStack_1d0 = uStack_1b0;
    uStack_1cc = 0xf;
    if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_e8);
    }
    FUN_140041b80(local_e8,&local_1d8);
    local_80 = local_e8;
    local_78 = &local_1a8;
    uStack_1dc = local_17c;
    uStack_1e0 = local_180;
    if ((1 << ((byte)local_17c & 0x1f) & 0x46U) == 0) {
      local_1e8 = local_188;
    }
    else {
      FUN_1400419b0(&local_1e8,&local_188);
    }
    local_res18 = 1;
    uStack_1ac = 7;
    local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,2);
    FUN_140042560(&local_1e8,&local_1b8);
    if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    local_1d8 = (uint)local_1e8;
    uStack_1d4 = local_1e8._4_4_;
    uStack_1d0 = uStack_1e0;
    uStack_1cc = uStack_1dc;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_c8);
    }
    FUN_140041b80(local_c8,&local_1d8);
    if ((1 << ((byte)uStack_1dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1e8);
    }
    local_70 = local_c8;
    puVar5 = (uint *)FUN_140e634e0(local_res8,local_res10,&local_198,6,CONCAT44(uVar9,DAT_1419fd6d8)
                                   ,&local_98);
    if (puVar5 != local_b8) {
      local_1d8 = *puVar5;
      uStack_1d4 = puVar5[1];
      uStack_1d0 = puVar5[2];
      uStack_1cc = puVar5[3];
      if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_b8);
      }
      FUN_140041b80(local_b8,&local_1d8);
    }
    local_68 = local_b8;
    local_1d8 = (uint)DAT_1419df7b0;
    uStack_1d4 = DAT_1419df7b0._4_4_;
    uStack_1d0 = DAT_1419df7b8;
    uStack_1cc = DAT_1419df7bc;
    if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_a8);
    }
    FUN_140041b80(local_a8,&local_1d8);
    local_60 = local_a8;
    gml_Script_draw_line_sprite(local_res8,local_res10,&local_1c8,2,&local_68);
  }
  if (local_48 != 0) {
    FUN_140e4cd60();
    local_48 = 0;
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  _eh_vector_destructor_iterator_(&local_118,0x10,8,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

