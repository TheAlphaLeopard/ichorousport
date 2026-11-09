// gml_Script_anon_34085_DefineTrinkets_TRINKETSINIT @ 0x14060e1b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_anon_34085_DefineTrinkets_TRINKETSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar9;
  ulonglong uVar10;
  undefined4 uVar12;
  longlong *plVar11;
  ulonglong in_stack_fffffffffffffe20;
  double local_1d8;
  undefined4 local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  char *local_1a0;
  undefined4 local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined8 local_178;
  undefined4 uStack_170;
  uint uStack_16c;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  uint uStack_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined4 local_f8 [3];
  undefined4 local_ec;
  undefined8 *local_e8;
  undefined8 *local_e0;
  undefined1 *local_d8;
  undefined1 *local_d0;
  undefined8 local_c8;
  byte local_bc;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong local_78;
  
  local_1a0 = "gml_Script_anon@33628@DefineTrinkets@TRINKETSINIT";
  local_1a8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_1a8;
  local_198 = 0x4bc;
  pcVar9 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_184 = 0xffffff;
  local_190 = 0;
  uStack_12c = 0xffffff;
  local_138 = 0;
  local_14c = 0xffffff;
  local_158 = 0;
  uStack_13c = 0xffffff;
  local_148 = 0;
  local_15c = 0xffffff;
  local_168 = 0;
  local_1cc = 0xffffff;
  local_1d8 = 0.0;
  local_1bc = 0;
  uVar7 = 0;
  uVar8 = 0;
  local_1c8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_198 = 0x4bd;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  uVar10 = (ulonglong)pcVar9 & 0xffffffffffffff00;
  FUN_140e87440(param_5,DAT_141a1f440,0x80000000,&local_128,uVar10,
                in_stack_fffffffffffffe20 & 0xffffffffffffff00);
  uVar12 = (undefined4)(uVar10 >> 0x20);
  local_1b8 = local_128;
  uStack_1b0 = uStack_120;
  uStack_1ac = uStack_11c;
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  FUN_140041b80(&local_190,&local_1b8);
  local_198 = 0x4be;
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  local_1c8 = 0;
  local_1c0 = 0;
  local_1bc = 5;
  local_e8 = &local_190;
  uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1c8,1,CONCAT44(uVar12,DAT_141a02ef8),&local_e8
                       );
  cVar2 = FUN_140e491e0(uVar5);
  if (cVar2 == '\0') {
    local_198 = 0x4be;
  }
  else {
    local_198 = 0x4bf;
    if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    local_1c8 = 0;
    local_1c0 = 0;
    local_1bc = 5;
    local_1b8 = CONCAT44(uRam00000001419e6b34,_DAT_1419e6b30);
    uStack_1b0 = uRam00000001419e6b38;
    uStack_1ac = uRam00000001419e6b3c;
    if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    FUN_140041b80(&local_c8,&local_1b8);
    local_e8 = &local_c8;
    uVar5 = gml_Script_choose_weighted(local_res8,local_res10,&local_1c8,1,&local_e8);
    cVar2 = FUN_140e491e0(uVar5);
    if (cVar2 != '\0') {
      local_198 = 0x4c1;
      FUN_140e87170(&local_190,DAT_1419fe0e8,0x80000000,&local_138,local_res8,local_res10);
      local_1b8 = local_138;
      uStack_1b0 = uStack_130;
      uStack_1ac = uStack_12c;
      if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_1b8);
      local_198 = 0x4c2;
      plVar11 = local_res8;
      FUN_140e87170(&local_190,DAT_1419fe158,0x80000000,&local_148,local_res8,local_res10);
      local_1b8 = local_148;
      uStack_1b0 = uStack_140;
      uStack_1ac = uStack_13c;
      if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_1b8);
      local_198 = 0x4c4;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1cc = 0;
      local_1d8 = 0.0;
      bVar1 = true;
      do {
        uVar12 = (undefined4)((ulonglong)plVar11 >> 0x20);
        if (!bVar1) {
          local_198 = 0x4c4;
          uVar3 = local_1cc & 0xffffff;
          if (uVar3 == 0) {
LAB_14060e5b8:
            local_1d8 = (double)CONCAT44(uVar8,uVar7) + 1.0;
          }
          else if (uVar3 == 1) {
            local_1d8 = (double)FUN_140e4b060(&local_1d8);
            local_1d8 = local_1d8 + 1.0;
            local_1cc = 0;
          }
          else if (uVar3 == 7) {
            local_1d8 = (double)CONCAT44(local_1d8._4_4_,local_1d8._0_4_ + 1);
          }
          else if (uVar3 == 10) {
            local_1d8 = (double)((longlong)local_1d8 + 1);
          }
          else {
            if (uVar3 == 0xd) {
              local_1cc = 0;
              goto LAB_14060e5b8;
            }
            FUN_140042910(&DAT_14172c3d8,&local_1d8,&local_1d8);
          }
        }
        bVar1 = false;
        local_fc = 0;
        local_108 = 0x4014000000000000;
        iVar4 = FUN_140e851f0(&local_1d8,&local_108,DAT_141955260,1);
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        if (iVar4 == -2 || -1 < iVar4) goto LAB_14060e8bc;
        local_198 = 0x4c6;
        if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = 5;
        local_e8 = &local_158;
        local_e0 = &local_168;
        local_118 = _DAT_141dd4d78;
        uStack_114 = uRam0000000141dd4d7c;
        uStack_110 = uRam0000000141dd4d80;
        uStack_10c = DAT_141dd4d84;
        if ((1 << (local_a8[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_a8);
        }
        FUN_140041b80(local_a8,&local_118);
        local_d8 = local_a8;
        uStack_1ac = 0xf;
        local_1b8 = 0x1000000000000a7;
        local_118 = 0xa7;
        uStack_114 = 0x1000000;
        uStack_110 = uStack_1b0;
        uStack_10c = 0xf;
        if ((1 << (local_98[0xc] & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_98);
        }
        FUN_140041b80(local_98,&local_118);
        local_d0 = local_98;
        plVar11 = (longlong *)CONCAT44(uVar12,DAT_141a0a7c8);
        uVar5 = FUN_140e634e0(local_res8,local_res10,&local_1c8,4,plVar11,&local_e8);
        iVar4 = FUN_140e63cb0(local_88,&local_res8,&local_res10,uVar5);
        if (0 < iVar4) {
          do {
            local_198 = 0x4c7;
            puVar6 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f6098);
            FUN_140e609c0(local_res8);
            uStack_16c = local_1cc;
            uStack_170 = local_1d0;
            if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) == 0) {
              local_178 = local_1d8;
            }
            else {
              FUN_1400419b0(&local_178,&local_1d8);
            }
            local_ec = 7;
            local_f8[0] = 4;
            FUN_140042560(&local_178,local_f8);
            if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_f8);
            }
            if (&local_178 != puVar6) {
              local_118 = (undefined4)local_178;
              uStack_114 = local_178._4_4_;
              uStack_110 = uStack_170;
              uStack_10c = uStack_16c;
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar6);
              }
              FUN_140041b80(puVar6,&local_118);
            }
            if ((1 << ((byte)uStack_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            FUN_140e60910(1);
            cVar2 = FUN_140e643f0(local_88,&local_res8,&local_res10);
          } while (cVar2 != '\0');
        }
        FUN_140e63970(local_88,&local_res8,&local_res10);
        if (local_78 != 0) {
          FUN_140e4cd60();
        }
        uVar7 = SUB84(local_1d8,0);
        uVar8 = (undefined4)((ulonglong)local_1d8 >> 0x20);
      } while( true );
    }
    local_198 = 0x4bf;
  }
LAB_14060e8bc:
  if ((1 << ((byte)local_1bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1c8);
  }
  if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1d8);
  }
  if ((1 << ((byte)local_15c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_168);
  }
  if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if ((1 << ((byte)local_184 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_190);
  }
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(&local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_1a8;
  return param_3;
}

