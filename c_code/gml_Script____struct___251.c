// gml_Script____struct___251 @ 0x1405be580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script____struct___251
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  uint uVar7;
  longlong *local_res8;
  undefined8 local_res10;
  code *pcVar8;
  undefined4 uVar11;
  undefined8 **ppuVar9;
  ulonglong uVar10;
  undefined8 **ppuVar12;
  ulonglong uVar13;
  undefined8 local_1b8;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined8 local_198;
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined1 local_178 [12];
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined1 *local_120;
  undefined1 *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  longlong local_68;
  
  local_140 = "gml_Script_StatesVendorBoss";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0x19d;
  pcVar8 = FUN_140041b30;
  local_res8 = param_1;
  local_res10 = param_2;
  _eh_vector_constructor_iterator_(&local_198,0x10,4,FUN_1400424d0,FUN_140041b30);
  uStack_7c = 0xffffff;
  local_88 = 0;
  uStack_8c = 0xffffff;
  local_98 = 0;
  uStack_9c = 0xffffff;
  local_a8 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_19c = 0;
  local_1a8 = 0;
  local_f4 = 0;
  local_100 = 0;
  local_104 = 0;
  local_110 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0x19f;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_b4 = *(undefined4 *)((longlong)param_5 + 0xc);
  local_b8 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) == 0) {
    local_c0 = *param_5;
  }
  else {
    FUN_1400419b0(&local_c0);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0b20) &&
     (_Init_thread_header(&DAT_141de0b20), DAT_141de0b20 == -1)) {
    _DAT_141de0a2c = 0;
    _DAT_141de0a20 = 0x4000000000000000;
    _DAT_141de0a40 = 0;
    _DAT_141de0a34 = 0;
    _DAT_141de0a44 = 1;
    _DAT_141de0a54 = 0;
    _DAT_141de0a48 = 0x3ff0000000000000;
    _DAT_141de0a58 = 2;
    _DAT_141de0a68 = 0;
    _DAT_141de0a5c = 0x4008000000000000;
    _DAT_141de0a6c = 3;
    atexit((_func_5014 *)&LAB_1414835a0);
    _Init_thread_footer(&DAT_141de0b20);
  }
  uVar7 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141de0a20 + (longlong)(int)uVar7 * 0x14,&local_c0,DAT_141955260,0);
    uVar11 = (undefined4)((ulonglong)pcVar8 >> 0x20);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141de0a30 + (longlong)(int)uVar7 * 0x14);
      bVar1 = (byte)local_19c;
      if (iVar3 == 0) {
        local_138 = 0x1a3;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
        if (puVar5 != &local_188) {
          local_1b8 = (longlong *)*puVar5;
          uStack_1b0 = *(undefined4 *)(puVar5 + 1);
          uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1b8);
        }
        local_128 = &local_188;
        local_1b8 = (longlong *)CONCAT44(uRam0000000141dd452c,_DAT_141dd4528);
        uStack_1b0 = uRam0000000141dd4530;
        uStack_1ac = DAT_141dd4534;
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_178);
        }
        FUN_140041b80(local_178,&local_1b8);
        local_120 = local_178;
        local_1b8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
        uStack_1b0 = uRam00000001419df7a8;
        uStack_1ac = uRam00000001419df7ac;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_1b8);
        local_118 = local_168;
        FUN_140e634e0(local_res8,local_res10,&local_1a8,3,CONCAT44(uVar11,DAT_1419ff3d8),&local_128)
        ;
        local_138 = 0x1a5;
      }
      else if (iVar3 == 1) {
        local_138 = 0x1a9;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        uStack_1ac = 0xf;
        local_1b8 = (longlong *)0x10000000000007e;
        local_158 = 0x10000000000007e;
        uStack_150 = uStack_1b0;
        uStack_14c = 0xf;
        if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_158);
        local_130 = &local_198;
        uVar6 = CONCAT44(uVar11,DAT_141a02ef8);
        uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1a8,1,uVar6,&local_130);
        uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
        cVar2 = FUN_140e491e0(uVar4);
        if (cVar2 == '\0') {
          local_138 = 0x1af;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
          local_1b8 = (longlong *)CONCAT44(uRam0000000141dc6734,_DAT_141dc6730);
          uStack_1b0 = uRam0000000141dc6738;
          uStack_1ac = uRam0000000141dc673c;
          if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_1b8);
          local_130 = &local_198;
          ppuVar12 = &local_130;
          ppuVar9 = (undefined8 **)CONCAT44(uVar11,DAT_141a0a0d8);
          puVar5 = (undefined8 *)FUN_140e634e0(local_res8,local_res10,&local_1a8,1,ppuVar9,ppuVar12)
          ;
          uStack_14c = *(undefined4 *)((longlong)puVar5 + 0xc);
          uStack_150 = *(undefined4 *)(puVar5 + 1);
          if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) == 0) {
            local_158 = *puVar5;
          }
          else {
            FUN_1400419b0(&local_158,puVar5);
          }
          uStack_1ac = 7;
          local_1b8 = (longlong *)CONCAT44(local_1b8._4_4_,2);
          FUN_140042560(&local_158,&local_1b8);
          if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          uVar7 = FUN_140e851f0(uVar4,&local_158,DAT_141955260,1);
          if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          if (uVar7 < 0x80000000) {
            local_138 = 0x1b1;
            FUN_140edd0e0(local_res8,local_res10,0,0);
            local_138 = 0x1b2;
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            local_1a8 = 0;
            local_1a0 = 0;
            local_19c = 5;
            uStack_1ac = 6;
            local_1b8 = local_res8;
            uVar13 = (ulonglong)ppuVar12 & 0xffffffffffffff00;
            uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
            FUN_140e87440(&local_1b8,DAT_1419fe0e8,0x80000000,&local_88,uVar10,uVar13);
            if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            uStack_1ac = 6;
            local_1b8 = local_res8;
            uVar13 = uVar13 & 0xffffffffffffff00;
            uVar10 = uVar10 & 0xffffffffffffff00;
            FUN_140e87440(&local_1b8,DAT_1419fe158,0x80000000,&local_98,uVar10,uVar13);
            if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            uStack_1ac = 6;
            local_1b8 = local_res8;
            uVar10 = uVar10 & 0xffffffffffffff00;
            FUN_140e87440(&local_1b8,DAT_141a1b910,0x80000000,&local_a8,uVar10,
                          uVar13 & 0xffffffffffffff00);
            uVar11 = (undefined4)(uVar10 >> 0x20);
            if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            local_1b8 = (longlong *)local_88;
            uStack_1b0 = uStack_80;
            uStack_1ac = uStack_7c;
            if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_198);
            }
            FUN_140041b80(&local_198,&local_1b8);
            local_130 = &local_198;
            local_1b8 = (longlong *)local_98;
            uStack_1b0 = uStack_90;
            uStack_1ac = uStack_8c;
            if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_1b8);
            local_128 = &local_188;
            local_1b8 = (longlong *)local_a8;
            uStack_1b0 = uStack_a0;
            uStack_1ac = uStack_9c;
            if ((1 << ((byte)_local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_178);
            }
            FUN_140041b80(local_178,&local_1b8);
            local_120 = local_178;
            uStack_1ac = 0xf;
            local_1b8 = (longlong *)0x10000000000002d;
            local_158 = 0x10000000000002d;
            uStack_150 = uStack_1b0;
            uStack_14c = 0xf;
            if ((1 << ((byte)_local_15c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_168);
            }
            FUN_140041b80(local_168,&local_158);
            local_118 = local_168;
            ppuVar9 = (undefined8 **)CONCAT44(uVar11,DAT_141a0a7c8);
            FUN_140e634e0(local_res8,local_res10,&local_1a8,4,ppuVar9,&local_130);
            local_138 = 0x1b3;
            local_1b8 = (longlong *)0x3ff0000000000000;
            uStack_1ac = 0xd;
            local_158 = 0x3ff0000000000000;
            uStack_150 = uStack_1b0;
            uStack_14c = 0xd;
            if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d0);
            }
            FUN_140041b80(&local_d0,&local_158);
            uStack_1ac = 0xf;
            local_1b8 = (longlong *)0x100000000000147;
            FUN_140e87930(&local_1b8,DAT_1419fec78,0x80000000,&local_d0);
            if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            local_138 = 0x1b5;
            uStack_1ac = 0xf;
            local_1b8 = (longlong *)0x1000000000000ee;
            iVar3 = FUN_140e63cb0(local_78,&local_res8,&local_res10,&local_1b8);
            if ((1 << ((byte)uStack_1ac & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1b8);
            }
            if (0 < iVar3) {
              do {
                local_138 = 0x1b7;
                if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1a8);
                }
                local_1a8 = 0;
                local_1a0 = 0;
                local_19c = 5;
                local_1b8 = (longlong *)CONCAT44(uRam00000001419e68b4,_DAT_1419e68b0);
                uStack_1b0 = uRam00000001419e68b8;
                uStack_1ac = uRam00000001419e68bc;
                if ((1 << ((byte)_local_18c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_198);
                }
                FUN_140041b80(&local_198,&local_1b8);
                local_130 = &local_198;
                local_1b8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
                uStack_1b0 = DAT_1419df7b8;
                uStack_1ac = DAT_1419df7bc;
                if ((1 << ((byte)_local_17c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_188);
                }
                FUN_140041b80(&local_188,&local_1b8);
                local_128 = &local_188;
                ppuVar9 = &local_130;
                gml_Script_truestate_begin_step(local_res8,local_res10,&local_1a8,2,ppuVar9);
                cVar2 = FUN_140e643f0(local_78,&local_res8,&local_res10);
              } while (cVar2 != '\0');
            }
            FUN_140e63970(local_78,&local_res8,&local_res10);
            if (local_68 != 0) {
              FUN_140e4cd60();
            }
          }
          uVar11 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
          local_138 = 0x1bc;
          if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          local_1a8 = 0;
          local_1a0 = 0;
          local_19c = 5;
          local_1b8 = (longlong *)CONCAT44(uRam0000000141dc6734,_DAT_141dc6730);
          uStack_1b0 = uRam0000000141dc6738;
          uStack_1ac = uRam0000000141dc673c;
          if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_1b8);
          local_130 = &local_198;
          uVar6 = FUN_140e634e0(local_res8,local_res10,&local_1a8,1,CONCAT44(uVar11,DAT_141a0a0d8),
                                &local_130);
          uVar7 = FUN_140e851f0(uVar4,uVar6,DAT_141955260,1);
          if (uVar7 < 0x80000000) {
            local_138 = 0x1be;
            (**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd3b8);
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419f5ef8);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            *puVar5 = 0x3ff0000000000000;
            local_138 = 0x1bf;
            uStack_1ac = 0xf;
            local_1b8 = (longlong *)0x10000010000032d;
            local_158 = 0x10000010000032d;
            uStack_150 = uStack_1b0;
            uStack_14c = 0xf;
            if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_e0);
            }
            FUN_140041b80(&local_e0,&local_158);
            FUN_140e86fa0(local_res8,DAT_141a0a728,0x80000000,&local_e0);
            local_138 = 0x1c0;
            if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f0);
            }
            local_e4 = 0;
            local_f0 = 0x3ff0000000000000;
            FUN_140e86fa0(local_res8,DAT_141a0a818,0x80000000,&local_f0);
            local_138 = 0x1c2;
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            local_1a8 = 0;
            local_1a0 = 0;
            local_19c = 5;
            uVar11 = 0;
            FUN_140265ac0(local_res8,local_res10,&local_1a8,0,0);
            local_138 = 0x1c3;
            if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            local_1a8 = 0;
            local_1a0 = 0;
            local_19c = 5;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
            if (puVar5 != &local_198) {
              local_1b8 = (longlong *)*puVar5;
              uStack_1b0 = *(undefined4 *)(puVar5 + 1);
              uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_198);
              }
              FUN_140041b80(&local_198,&local_1b8);
            }
            local_130 = &local_198;
            local_1b8 = (longlong *)CONCAT44(uRam0000000141dd452c,_DAT_141dd4528);
            uStack_1b0 = uRam0000000141dd4530;
            uStack_1ac = DAT_141dd4534;
            if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_1b8);
            local_128 = &local_188;
            uVar6 = CONCAT44(uVar11,DAT_1419ff4f8);
            uVar4 = FUN_140e634e0(local_res8,local_res10,&local_1a8,2,uVar6,&local_130);
            uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
            cVar2 = FUN_140e491e0(uVar4);
            if (cVar2 == '\0') {
              local_138 = 0x1c5;
              if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_100);
              }
              local_100 = 0;
              local_f8 = 0;
              local_f4 = 5;
              uStack_1ac = 0xf;
              local_1b8 = (longlong *)0x100000200000011;
              local_158 = 0x100000200000011;
              uStack_150 = uStack_1b0;
              uStack_14c = 0xf;
              if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_178);
              }
              FUN_140041b80(local_178,&local_158);
              local_120 = local_178;
              uVar6 = CONCAT44(uVar11,DAT_141a07888);
              uVar4 = FUN_140e634e0(local_res8,local_res10,&local_100,1,uVar6,&local_120);
              uVar11 = (undefined4)((ulonglong)uVar6 >> 0x20);
              cVar2 = FUN_140e491e0(uVar4);
              if (cVar2 == '\0') {
                local_138 = 0x1c7;
                if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_110);
                }
                local_110 = 0;
                local_108 = 0;
                local_104 = 5;
                uStack_1ac = 0xf;
                local_1b8 = (longlong *)0x100000200000007;
                local_158 = 0x100000200000007;
                uStack_150 = uStack_1b0;
                uStack_14c = 0xf;
                if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_168);
                }
                FUN_140041b80(local_168,&local_158);
                local_118 = local_168;
                uVar4 = CONCAT44(uVar11,DAT_141a07788);
                FUN_140e634e0(local_res8,local_res10,&local_110,1,uVar4,&local_118);
                uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
                local_138 = 0x1c8;
                if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1a8);
                }
                local_1a8 = 0;
                local_1a0 = 0;
                local_19c = 5;
                uStack_1ac = 0xf;
                local_1b8 = (longlong *)0x1000002000000a8;
                local_158 = 0x1000002000000a8;
                uStack_150 = uStack_1b0;
                uStack_14c = 0xf;
                if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_198);
                }
                FUN_140041b80(&local_198,&local_158);
                local_130 = &local_198;
                local_1b8 = (longlong *)CONCAT44(uRam00000001419e6864,_DAT_1419e6860);
                uStack_1b0 = uRam00000001419e6868;
                uStack_1ac = uRam00000001419e686c;
                if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_188);
                }
                FUN_140041b80(&local_188,&local_1b8);
                local_128 = &local_188;
                local_1b8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
                uStack_1b0 = uRam00000001419df7a8;
                uStack_1ac = uRam00000001419df7ac;
                if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_178);
                }
                FUN_140041b80(local_178,&local_1b8);
                local_120 = local_178;
                uVar4 = CONCAT44(uVar11,DAT_141a0a2e8);
                FUN_140e634e0(local_res8,local_res10,&local_1a8,3,uVar4,&local_130);
                uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
                local_138 = 0x1c9;
                if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_1a8);
                }
                local_1a8 = 0;
                local_1a0 = 0;
                local_19c = 5;
                uStack_1ac = 0xf;
                local_1b8 = (longlong *)0x100000200000011;
                local_158 = 0x100000200000011;
                uStack_150 = uStack_1b0;
                uStack_14c = 0xf;
                if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_198);
                }
                FUN_140041b80(&local_198,&local_158);
                local_130 = &local_198;
                local_1b8 = (longlong *)CONCAT44(uRam00000001419e6864,_DAT_1419e6860);
                uStack_1b0 = uRam00000001419e6868;
                uStack_1ac = uRam00000001419e686c;
                if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_188);
                }
                FUN_140041b80(&local_188,&local_1b8);
                local_128 = &local_188;
                local_1b8 = (longlong *)CONCAT44(uRam00000001419df7a4,_DAT_1419df7a0);
                uStack_1b0 = uRam00000001419df7a8;
                uStack_1ac = uRam00000001419df7ac;
                if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(local_178);
                }
                FUN_140041b80(local_178,&local_1b8);
                local_120 = local_178;
                uVar4 = CONCAT44(uVar11,DAT_141a0a2e8);
                FUN_140e634e0(local_res8,local_res10,&local_1a8,3,uVar4,&local_130);
                uVar11 = (undefined4)((ulonglong)uVar4 >> 0x20);
              }
              local_138 = 0x1cc;
              if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_1a8);
              }
              local_1a8 = 0;
              local_1a0 = 0;
              local_19c = 5;
              puVar5 = (undefined8 *)(**(code **)(*local_res8 + 8))(local_res8,DAT_1419fd438);
              if (puVar5 != &local_198) {
                local_1b8 = (longlong *)*puVar5;
                uStack_1b0 = *(undefined4 *)(puVar5 + 1);
                uStack_1ac = *(undefined4 *)((longlong)puVar5 + 0xc);
                if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(&local_198);
                }
                FUN_140041b80(&local_198,&local_1b8);
              }
              local_130 = &local_198;
              local_1b8 = (longlong *)CONCAT44(uRam0000000141dd452c,_DAT_141dd4528);
              uStack_1b0 = uRam0000000141dd4530;
              uStack_1ac = DAT_141dd4534;
              if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_188);
              }
              FUN_140041b80(&local_188,&local_1b8);
              local_128 = &local_188;
              local_1b8 = (longlong *)CONCAT44(uRam00000001419df7c4,_DAT_1419df7c0);
              uStack_1b0 = uRam00000001419df7c8;
              uStack_1ac = uRam00000001419df7cc;
              if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(local_178);
              }
              FUN_140041b80(local_178,&local_1b8);
              local_120 = local_178;
              FUN_140e634e0(local_res8,local_res10,&local_1a8,3,CONCAT44(uVar11,DAT_1419ff3d8),
                            &local_130);
              local_138 = 0x1d6;
              break;
            }
          }
          else {
            local_138 = 0x1d2;
            puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd428);
            uVar4 = FUN_140e794b0(0,0);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            *puVar5 = uVar4;
          }
          local_138 = 0x1d6;
        }
        else {
          local_138 = 0x1ab;
          puVar5 = (undefined8 *)(**(code **)(*local_res8 + 0x10))(local_res8,DAT_1419fd3b8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0;
          local_138 = 0x1ac;
        }
      }
      else if (iVar3 == 2) {
        local_138 = 0x1da;
        if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        local_1a8 = 0;
        local_1a0 = 0;
        local_19c = 5;
        uVar4 = (**(code **)(*local_res8 + 8))(local_res8,DAT_1419f5b18);
        FUN_140e63610(local_res8,local_res10,&local_1a8,0,uVar4,0);
        local_138 = 0x1db;
      }
      else if (iVar3 == 3) {
        local_138 = 0x1df;
      }
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  if ((1 << ((byte)local_b4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c0);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_19c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_1a8);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uStack_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(&local_198,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_148;
  return param_3;
}

