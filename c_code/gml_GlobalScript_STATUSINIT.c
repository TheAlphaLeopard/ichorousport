// gml_GlobalScript_STATUSINIT @ 0x1405bd350

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_GlobalScript_STATUSINIT
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  uint uVar6;
  code *pcVar7;
  undefined4 uVar10;
  undefined8 uVar8;
  ulonglong uVar9;
  undefined8 **ppuVar11;
  ulonglong uVar12;
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined8 local_198;
  undefined4 local_190;
  undefined4 local_18c;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  byte local_15c;
  undefined8 local_158;
  byte local_14c;
  undefined8 local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  
  local_110 = "gml_Script_StatesVendorChange";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 0x16d;
  pcVar7 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_168,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_18c = 0;
  local_198 = 0;
  local_16c = 0;
  local_178 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_108 = 0x16f;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_5c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_60 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) == 0) {
    local_68 = *param_5;
  }
  else {
    FUN_1400419b0(&local_68);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0b84) &&
     (_Init_thread_header(&DAT_141de0b84), DAT_141de0b84 == -1)) {
    _DAT_141de0adc = 0;
    _DAT_141de0ad0 = 0x4000000000000000;
    _DAT_141de0af0 = 0;
    _DAT_141de0ae4 = 0;
    _DAT_141de0af4 = 1;
    _DAT_141de0b04 = 0;
    _DAT_141de0af8 = 0x3ff0000000000000;
    _DAT_141de0b08 = 2;
    _DAT_141de0b18 = 0;
    _DAT_141de0b0c = 0x4008000000000000;
    _DAT_141de0b1c = 3;
    atexit((_func_5014 *)&LAB_141483580);
    _Init_thread_footer(&DAT_141de0b84);
  }
  uVar6 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141de0ad0 + (longlong)(int)uVar6 * 0x14,&local_68,DAT_141955260,0);
    uVar10 = (undefined4)((ulonglong)pcVar7 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141de0ae0 + (longlong)(int)uVar6 * 0x14);
      bVar1 = (byte)local_18c;
      if (iVar3 == 0) {
        local_108 = 0x173;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar5 != &local_158) {
          local_1a8 = (longlong *)*puVar5;
          uStack_1a0 = *(undefined4 *)(puVar5 + 1);
          uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_1a8);
        }
        local_f8 = &local_158;
        local_1a8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
        uStack_1a0 = uRam0000000141dd4500;
        uStack_19c = DAT_141dd4504;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_1a8);
        local_f0 = &local_148;
        local_1a8 = (longlong *)CONCAT44(uRam0000000141dc6734,_DAT_141dc6730);
        uStack_1a0 = uRam0000000141dc6738;
        uStack_19c = uRam0000000141dc673c;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_1a8);
        local_e8 = local_138;
        ppuVar11 = &local_f8;
        uVar9 = CONCAT44(uVar10,DAT_1419ff3d8);
        FUN_140e634e0(param_1,param_2,&local_198,3,uVar9,ppuVar11);
        local_108 = 0x174;
        uStack_19c = 0xf;
        local_1a8 = (longlong *)0x100000100000325;
        local_188 = 0x100000100000325;
        uStack_180 = uStack_1a0;
        uStack_17c = 0xf;
        if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_88);
        }
        FUN_140041b80(&local_88,&local_188);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_88);
        local_108 = 0x175;
        if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
        uStack_19c = 6;
        uVar12 = (ulonglong)ppuVar11 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        local_1a8 = param_1;
        FUN_140e87440(&local_1a8,DAT_1419fe0e8,0x80000000,&local_98,uVar9,uVar12);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        uStack_19c = 6;
        uVar12 = uVar12 & 0xffffffffffffff00;
        uVar9 = uVar9 & 0xffffffffffffff00;
        local_1a8 = param_1;
        FUN_140e87440(&local_1a8,DAT_1419fe158,0x80000000,&local_a8,uVar9,uVar12);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        uStack_19c = 6;
        uVar9 = uVar9 & 0xffffffffffffff00;
        local_1a8 = param_1;
        FUN_140e87440(&local_1a8,DAT_141a1b910,0x80000000,&local_58,uVar9,
                      uVar12 & 0xffffffffffffff00);
        uVar10 = (undefined4)(uVar9 >> 0x20);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        uStack_19c = 0;
        local_1a8 = (longlong *)0x4030000000000000;
        FUN_140042560(&local_1a8,uVar4);
        uStack_17c = local_8c;
        uStack_180 = local_90;
        if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
          local_188 = local_98;
        }
        else {
          FUN_1400419b0(&local_188,&local_98);
        }
        FUN_1400460e0(&local_188,&local_1a8);
        local_78 = (undefined4)local_188;
        uStack_74 = local_188._4_4_;
        uStack_70 = uStack_180;
        uStack_6c = uStack_17c;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_78);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_100 = &local_168;
        uStack_17c = local_9c;
        uStack_180 = local_a0;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
          local_188 = local_a8;
        }
        else {
          FUN_1400419b0(&local_188,&local_a8);
        }
        uStack_19c = 7;
        local_1a8 = (longlong *)CONCAT44(local_1a8._4_4_,0x20);
        FUN_1400462a0(&local_188,&local_1a8);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_78 = (undefined4)local_188;
        uStack_74 = local_188._4_4_;
        uStack_70 = uStack_180;
        uStack_6c = uStack_17c;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_78);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_f8 = &local_158;
        local_78 = (undefined4)local_58;
        uStack_74 = local_58._4_4_;
        uStack_70 = uStack_50;
        uStack_6c = uStack_4c;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140041b80(&local_148,&local_78);
        local_f0 = &local_148;
        uStack_19c = 0xf;
        local_1a8 = (longlong *)0x10000000000010c;
        local_78 = 0x10c;
        uStack_74 = 0x1000000;
        uStack_70 = uStack_1a0;
        uStack_6c = 0xf;
        if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_138);
        }
        FUN_140041b80(local_138,&local_78);
        local_e8 = local_138;
        FUN_140e634e0(param_1,param_2,&local_198,4,CONCAT44(uVar10,DAT_141a0a7c8),&local_100);
        local_108 = 0x177;
      }
      else if (iVar3 == 1) {
        local_108 = 0x17b;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar5 != &local_168) {
          local_1a8 = (longlong *)*puVar5;
          uStack_1a0 = *(undefined4 *)(puVar5 + 1);
          uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_1a8);
        }
        local_100 = &local_168;
        local_1a8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
        uStack_1a0 = uRam0000000141dd4500;
        uStack_19c = DAT_141dd4504;
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_1a8);
        local_f8 = &local_158;
        uVar8 = CONCAT44(uVar10,DAT_1419ff4f8);
        uVar4 = FUN_140e634e0(param_1,param_2,&local_198,2,uVar8,&local_100);
        uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
        uStack_19c = 0;
        local_1a8 = (longlong *)0x0;
        iVar3 = FUN_140e851f0(uVar4,&local_1a8,DAT_141955260,0);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        if (iVar3 == 0) {
          local_108 = 0x17d;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_178 = 0;
          local_170 = 0;
          local_16c = 5;
          uStack_19c = 0xf;
          local_1a8 = (longlong *)0x10000000000010c;
          local_188 = 0x10000000000010c;
          uStack_180 = uStack_1a0;
          uStack_17c = 0xf;
          if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          FUN_140041b80(&local_148,&local_188);
          local_f0 = &local_148;
          uVar8 = CONCAT44(uVar10,DAT_141a02ef8);
          uVar4 = FUN_140e634e0(param_1,param_2,&local_178,1,uVar8,&local_f0);
          uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
          cVar2 = FUN_140e491e0(uVar4);
          if (cVar2 == '\0') {
            local_108 = 0x17f;
            if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c8);
            }
            local_c8 = 0;
            local_c0 = 0;
            local_bc = 5;
            uStack_19c = 0xf;
            local_1a8 = (longlong *)0x100000200000007;
            local_188 = 0x100000200000007;
            uStack_180 = uStack_1a0;
            uStack_17c = 0xf;
            if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_138);
            }
            FUN_140041b80(local_138,&local_188);
            local_e8 = local_138;
            uVar8 = CONCAT44(uVar10,DAT_141a07888);
            uVar4 = FUN_140e634e0(param_1,param_2,&local_c8,1,uVar8,&local_e8);
            uVar10 = (undefined4)((ulonglong)uVar8 >> 0x20);
            cVar2 = FUN_140e491e0(uVar4);
            if (cVar2 != '\0') {
              local_108 = 0x180;
              if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_d8);
              }
              local_d8 = 0;
              local_d0 = 0;
              local_cc = 5;
              uStack_19c = 0xf;
              local_1a8 = (longlong *)0x100000200000007;
              local_188 = 0x100000200000007;
              uStack_180 = uStack_1a0;
              uStack_17c = 0xf;
              if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_128);
              }
              FUN_140041b80(local_128,&local_188);
              local_e0 = local_128;
              FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar10,DAT_141a07788),&local_e0);
            }
            local_108 = 0x182;
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            local_198 = 0;
            local_190 = 0;
            local_18c = 5;
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fec98);
            local_1a8 = (longlong *)CONCAT44(uRam0000000141dd453c,_DAT_141dd4538);
            uStack_1a0 = uRam0000000141dd4540;
            uStack_19c = DAT_141dd4544;
            if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_168);
            }
            FUN_140041b80(&local_168,&local_1a8);
            local_100 = &local_168;
            FUN_140e63610(param_1,param_2,&local_198,1,uVar4,&local_100);
            uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
            local_108 = 0x183;
            if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            local_198 = 0;
            local_190 = 0;
            local_18c = 5;
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            local_178 = 0;
            local_170 = 0;
            local_16c = 5;
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
            if (puVar5 != &local_168) {
              local_1a8 = (longlong *)*puVar5;
              uStack_1a0 = *(undefined4 *)(puVar5 + 1);
              uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_168);
              }
              FUN_140041b80(&local_168,&local_1a8);
            }
            local_100 = &local_168;
            local_1a8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
            uStack_1a0 = uRam0000000141dd4500;
            uStack_19c = DAT_141dd4504;
            if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            FUN_140041b80(&local_158,&local_1a8);
            local_f8 = &local_158;
            if (puVar5 != &local_148) {
              local_1a8 = (longlong *)*puVar5;
              uStack_1a0 = *(undefined4 *)(puVar5 + 1);
              uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_148);
              }
              FUN_140041b80(&local_148,&local_1a8);
            }
            local_f0 = &local_148;
            local_1a8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
            uStack_1a0 = uRam0000000141dd4500;
            uStack_19c = DAT_141dd4504;
            if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_138);
            }
            FUN_140041b80(local_138,&local_1a8);
            local_e8 = local_138;
            uVar4 = CONCAT44(uVar10,DAT_1419ff4f8);
            puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar4,&local_100);
            uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
            uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
            uStack_180 = *(undefined4 *)(puVar5 + 1);
            if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) == 0) {
              local_188 = *puVar5;
            }
            else {
              FUN_1400419b0(&local_188,puVar5);
            }
            uStack_19c = 7;
            local_1a8 = (longlong *)CONCAT44(local_1a8._4_4_,1);
            FUN_1400460e0(&local_188,&local_1a8);
            if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            local_1a8 = (longlong *)local_188;
            uStack_1a0 = uStack_180;
            uStack_19c = uStack_17c;
            if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_128);
            }
            FUN_140041b80(local_128,&local_1a8);
            if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            local_e0 = local_128;
            FUN_140e634e0(param_1,param_2,&local_198,3,CONCAT44(uVar10,DAT_1419fd648),&local_f0);
          }
        }
        else {
          local_108 = 0x188;
          if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          local_198 = 0;
          local_190 = 0;
          local_18c = 5;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
          if (puVar5 != &local_168) {
            local_1a8 = (longlong *)*puVar5;
            uStack_1a0 = *(undefined4 *)(puVar5 + 1);
            uStack_19c = *(undefined4 *)((longlong)puVar5 + 0xc);
            if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_168);
            }
            FUN_140041b80(&local_168,&local_1a8);
          }
          local_100 = &local_168;
          local_1a8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
          uStack_1a0 = uRam0000000141dd4500;
          uStack_19c = DAT_141dd4504;
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_1a8);
          local_f8 = &local_158;
          uVar4 = FUN_140e634e0(param_1,param_2,&local_198,2,CONCAT44(uVar10,DAT_1419ff4f8),
                                &local_100);
          uStack_19c = 0;
          local_1a8 = (longlong *)0x3ff0000000000000;
          iVar3 = FUN_140e851f0(uVar4,&local_1a8,DAT_141955260,0);
          if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          if (iVar3 == 0) {
            local_108 = 0x18a;
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            local_178 = 0;
            local_170 = 0;
            local_16c = 5;
            local_1a8 = (longlong *)CONCAT44(uRam00000001419e6884,_DAT_1419e6880);
            uStack_1a0 = uRam00000001419e6888;
            uStack_19c = uRam00000001419e688c;
            if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            FUN_140041b80(&local_148,&local_1a8);
            local_f0 = &local_148;
            local_1a8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_1a0 = DAT_1419df7b8;
            uStack_19c = DAT_1419df7bc;
            if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_138);
            }
            FUN_140041b80(local_138,&local_1a8);
            local_e8 = local_138;
            gml_Script_truestate_begin_step(param_1,param_2,&local_178,2,&local_f0);
          }
        }
        local_108 = 0x18e;
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        local_ac = 0;
        local_b8 = 0x3ff0000000000000;
        uStack_19c = 0xf;
        local_1a8 = (longlong *)0x100000000000058;
        FUN_140e87930(&local_1a8,DAT_1419fefe8,0x80000000,&local_b8);
        if ((1 << ((byte)uStack_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_108 = 399;
      }
      else if (iVar3 == 2) {
        local_108 = 0x193;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        local_198 = 0;
        local_190 = 0;
        local_18c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_198,0,uVar4,0);
        local_108 = 0x194;
      }
      else if (iVar3 == 3) {
        local_108 = 0x198;
      }
      break;
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 4);
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_18c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_198);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,5,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

