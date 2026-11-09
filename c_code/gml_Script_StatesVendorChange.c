// gml_Script_StatesVendorChange @ 0x1405b9880

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesVendorChange
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  uint uVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  undefined8 **ppuVar13;
  undefined8 **ppuVar14;
  ulonglong uVar15;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined4 local_1cc;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined8 local_1a8;
  byte local_19c;
  undefined8 local_198;
  byte local_18c;
  undefined8 local_188;
  byte local_17c;
  undefined8 local_178;
  byte local_16c;
  undefined1 local_168 [12];
  byte local_15c;
  undefined8 local_158;
  undefined4 local_14c;
  undefined8 local_148;
  char *local_140;
  undefined4 local_138;
  undefined8 *local_130;
  undefined8 *local_128;
  undefined8 *local_120;
  undefined8 *local_118;
  undefined1 *local_110;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  
  local_140 = "gml_Script_StatesVendorIdle";
  local_148 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_148;
  local_138 = 0xe5;
  pcVar10 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_1a8,0x10,5,FUN_1400424d0,FUN_140041b30);
  local_14c = 0xffffff;
  local_158 = 0;
  local_dc = 0xffffff;
  local_e8 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_ac = 0xffffff;
  local_b8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57c60);
  puVar6 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0ae88);
  local_1cc = 0;
  local_1d8 = 0;
  local_1ac = 0;
  local_1b8 = 0;
  local_bc = 0;
  local_c8 = 0;
  local_cc = 0;
  local_d8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_138 = 0xe7;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_8c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_90 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) == 0) {
    local_98 = *param_5;
  }
  else {
    FUN_1400419b0(&local_98);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de0be0) &&
     (_Init_thread_header(&DAT_141de0be0), DAT_141de0be0 == -1)) {
    _DAT_141de0a8c = 0;
    _DAT_141de0a80 = 0x4000000000000000;
    _DAT_141de0aa0 = 0;
    _DAT_141de0a94 = 0;
    _DAT_141de0aa4 = 1;
    _DAT_141de0ab4 = 0;
    _DAT_141de0aa8 = 0x3ff0000000000000;
    _DAT_141de0ab8 = 2;
    _DAT_141de0ac8 = 0;
    _DAT_141de0abc = 0x4008000000000000;
    _DAT_141de0acc = 3;
    atexit((_func_5014 *)&LAB_141483540);
    _Init_thread_footer(&DAT_141de0be0);
  }
  uVar9 = 0;
LAB_1405b9b00:
  iVar3 = FUN_140e851f0(&DAT_141de0a80 + (longlong)(int)uVar9 * 0x14,&local_98,DAT_141955260,0);
  uVar4 = (undefined4)((ulonglong)pcVar10 >> 0x20);
  if (iVar3 != 0) goto code_r0x0001405b9b2d;
  iVar3 = *(int *)(&DAT_141de0a90 + (longlong)(int)uVar9 * 0x14);
  bVar1 = (byte)local_1cc;
  if (iVar3 == 0) {
    local_138 = 0xeb;
    if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
    if (puVar5 != &local_198) {
      local_1e8 = (longlong *)*puVar5;
      uStack_1e0 = puVar5[1];
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1e8);
    }
    local_128 = &local_198;
    local_1e8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
    uStack_1e0 = CONCAT44(DAT_141dd4504,uRam0000000141dd4500);
    if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    FUN_140041b80(&local_188,&local_1e8);
    local_120 = &local_188;
    local_1e8 = (longlong *)CONCAT44(uRam0000000141dc6734,_DAT_141dc6730);
    uStack_1e0 = CONCAT44(uRam0000000141dc673c,uRam0000000141dc6738);
    if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    FUN_140041b80(&local_178,&local_1e8);
    local_118 = &local_178;
    FUN_140e634e0(param_1,param_2,&local_1d8,3,CONCAT44(uVar4,DAT_1419ff3d8),&local_128);
    local_138 = 0xec;
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_14c = 0;
    local_158 = 0;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_158);
    local_138 = 0xee;
  }
  else if (iVar3 == 1) {
    local_138 = 0xf2;
    if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
    if (puVar8 != &local_1a8) {
      local_1e8 = (longlong *)*puVar8;
      uStack_1e0 = puVar8[1];
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1e8);
    }
    local_130 = &local_1a8;
    local_1e8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
    uStack_1e0 = CONCAT44(DAT_141dd4504,uRam0000000141dd4500);
    if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_198);
    }
    FUN_140041b80(&local_198,&local_1e8);
    local_128 = &local_198;
    uVar11 = CONCAT44(uVar4,DAT_1419ff4f8);
    uVar7 = FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar11,&local_130);
    uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
    uStack_1c0 = (ulonglong)(uint)uStack_1c0;
    local_1c8 = 0;
    iVar3 = FUN_140e851f0(uVar7,&local_1c8,DAT_141955260,0);
    if ((1 << ((byte)(uStack_1c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1c8);
    }
    if (iVar3 == 0) {
      local_138 = 0xf4;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      uStack_1e0 = CONCAT44(0xf,(uint)uStack_1e0);
      local_1e8 = (longlong *)0x1000000000000d1;
      local_1c8 = 0x1000000000000d1;
      uStack_1c0 = CONCAT44(0xf,(uint)uStack_1e0);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1c8);
      local_120 = &local_188;
      ppuVar14 = &local_120;
      uVar12 = CONCAT44(uVar4,DAT_141a02ef8);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_1b8,1,uVar12,ppuVar14);
      cVar2 = FUN_140e491e0(uVar7);
      if (cVar2 != '\0') goto LAB_1405bb521;
      if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_c8);
      }
      local_c8 = 0;
      local_c0 = 0;
      local_bc = 5;
      uStack_1c0 = CONCAT44(0xf,(uint)uStack_1c0);
      local_1c8 = 0x1000000000000ee;
      uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
      uVar12 = uVar12 & 0xffffffffffffff00;
      FUN_140e87440(&local_1c8,DAT_1419f5868,0x80000000,&local_e8,uVar12,uVar15);
      if ((1 << ((byte)(uStack_1c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1c8);
      }
      FUN_140e87440(&local_e8,DAT_1419f5848,0x80000000,&local_78,uVar12 & 0xffffffffffffff00,
                    uVar15 & 0xffffffffffffff00);
      local_1e8 = (longlong *)CONCAT44(uRam0000000141dd444c,_DAT_141dd4448);
      uStack_1e0 = CONCAT44(DAT_141dd4454,uRam0000000141dd4450);
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1e8);
      local_118 = &local_178;
      switch(local_dc) {
      default:
switchD_1405b9ec9_caseD_1:
        uVar7 = 0;
        break;
      case 6:
        uVar7 = local_e8;
        break;
      case 0xf:
        iVar3 = (int)((ulonglong)local_e8 >> 0x20);
        if ((iVar3 != 0x1000000) && (iVar3 != 0x4000001)) goto switchD_1405b9ec9_caseD_1;
      case 0:
      case 7:
      case 10:
      case 0xd:
        uVar4 = FUN_140e4a8b0(&local_e8);
        uVar7 = FUN_140e87250(uVar4);
      }
      puVar5 = &local_78;
      uVar7 = FUN_140e63610(uVar7,param_2,&local_c8,1,puVar5,&local_118);
      uVar4 = (undefined4)((ulonglong)puVar5 >> 0x20);
      cVar2 = FUN_140e491e0(uVar7);
      if (cVar2 != '\0') {
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_d8 = 0;
        local_d0 = 0;
        local_cc = 5;
        uStack_1e0 = CONCAT44(0xf,(uint)uStack_1e0);
        local_1e8 = (longlong *)0x10000000000007e;
        local_1c8 = 0x10000000000007e;
        uStack_1c0 = CONCAT44(0xf,(uint)uStack_1e0);
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_1c8);
        local_110 = local_168;
        uVar7 = FUN_140e634e0(param_1,param_2,&local_d8,1,CONCAT44(uVar4,DAT_141a02ef8),&local_110);
        cVar2 = FUN_140e491e0(uVar7);
        if (cVar2 == '\0') {
          local_138 = 0xf6;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_14c = 0;
          local_158 = 0x3ff0000000000000;
          FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_158);
          local_138 = 0xf8;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          local_1e8 = (longlong *)CONCAT44(uRam0000000141dd440c,_DAT_141dd4408);
          uStack_1e0 = CONCAT44(DAT_141dd4414,uRam0000000141dd4410);
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1e8);
          local_130 = &local_1a8;
          ppuVar14 = &local_130;
          gml_Script_CreateBossUi(param_1,param_2,&local_1d8,1,ppuVar14);
          uVar4 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
          local_138 = 0xfa;
          if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1d8);
          }
          local_1d8 = 0;
          local_1d0 = 0;
          local_1cc = 5;
          if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1b8);
          }
          local_1b8 = 0;
          local_1b0 = 0;
          local_1ac = 5;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
          if (puVar5 != &local_1a8) {
            local_1e8 = (longlong *)*puVar5;
            uStack_1e0 = puVar5[1];
            if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_1a8);
            }
            FUN_140041b80(&local_1a8,&local_1e8);
          }
          local_130 = &local_1a8;
          local_1e8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
          uStack_1e0 = CONCAT44(DAT_141dd4504,uRam0000000141dd4500);
          if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_198);
          }
          FUN_140041b80(&local_198,&local_1e8);
          local_128 = &local_198;
          if (puVar5 != &local_188) {
            local_1e8 = (longlong *)*puVar5;
            uStack_1e0 = puVar5[1];
            if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            FUN_140041b80(&local_188,&local_1e8);
          }
          local_120 = &local_188;
          local_1e8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
          uStack_1e0 = CONCAT44(DAT_141dd4504,uRam0000000141dd4500);
          if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_1e8);
          local_118 = &local_178;
          uVar7 = CONCAT44(uVar4,DAT_1419ff4f8);
          puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar7,&local_130);
          uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
          uStack_1c0 = puVar5[1];
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
            local_1c8 = *puVar5;
          }
          else {
            FUN_1400419b0(&local_1c8,puVar5);
          }
          uStack_1e0._4_4_ = 7;
          local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,1);
          FUN_1400460e0(&local_1c8,&local_1e8);
          if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1e8);
          }
          local_1e8 = (longlong *)local_1c8;
          uStack_1e0 = uStack_1c0;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_168);
          }
          FUN_140041b80(local_168,&local_1e8);
          if ((1 << ((byte)(uStack_1c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1c8);
          }
LAB_1405bb4f0:
          local_110 = local_168;
          FUN_140e634e0(param_1,param_2,&local_1d8,3,CONCAT44(uVar4,DAT_1419fd648),&local_120);
        }
      }
LAB_1405bb521:
      local_138 = 0x12d;
    }
    else {
      local_138 = 0xff;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
      if (puVar8 != &local_1a8) {
        local_1e8 = (longlong *)*puVar8;
        uStack_1e0 = puVar8[1];
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_1e8);
      }
      local_130 = &local_1a8;
      local_1e8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
      uStack_1e0 = CONCAT44(DAT_141dd4504,uRam0000000141dd4500);
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1e8);
      local_128 = &local_198;
      ppuVar14 = &local_130;
      uVar11 = CONCAT44(uVar4,DAT_1419ff4f8);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_1d8,2,uVar11,ppuVar14);
      uVar4 = (undefined4)((ulonglong)uVar11 >> 0x20);
      uStack_1e0 = uStack_1e0 & 0xffffffff;
      local_1e8 = (longlong *)0x3ff0000000000000;
      iVar3 = FUN_140e851f0(uVar7,&local_1e8,DAT_141955260,0);
      if ((1 << ((byte)(uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if (iVar3 != 0) {
        local_138 = 0x125;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        puVar8 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar8 != &local_1a8) {
          local_1e8 = (longlong *)*puVar8;
          uStack_1e0 = puVar8[1];
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1e8);
        }
        local_130 = &local_1a8;
        local_1e8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
        uStack_1e0 = CONCAT44(DAT_141dd4504,uRam0000000141dd4500);
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1e8);
        local_128 = &local_198;
        uVar7 = FUN_140e634e0(param_1,param_2,&local_1d8,2,CONCAT44(uVar4,DAT_1419ff4f8),&local_130)
        ;
        uStack_1e0 = uStack_1e0 & 0xffffffff;
        local_1e8 = (longlong *)0x4000000000000000;
        iVar3 = FUN_140e851f0(uVar7,&local_1e8,DAT_141955260,0);
        if ((1 << ((byte)(uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        if (iVar3 != 0) goto LAB_1405bb521;
        local_138 = 0x127;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        FUN_140e609c0(DAT_141a729d8);
        uVar4 = 0;
        puVar8 = (undefined8 *)FUN_14028f0c0(param_1,param_2,&local_1b8,0,0);
        if (puVar8 != puVar6) {
          local_1e8 = (longlong *)*puVar8;
          uStack_1e0 = puVar8[1];
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_1e8);
        }
        FUN_140e60910(1);
        local_138 = 0x128;
        uStack_1e0 = CONCAT44(0xd,(uint)uStack_1e0);
        local_1e8 = (longlong *)0x0;
        if (&local_1e8 != puVar5) {
          local_1c8 = 0;
          uStack_1c0 = CONCAT44(0xd,(uint)uStack_1e0);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_1c8);
        }
        local_138 = 0x129;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        local_1e8 = (longlong *)CONCAT44(uRam0000000141dc6734,_DAT_141dc6730);
        uStack_1e0 = CONCAT44(uRam0000000141dc673c,uRam0000000141dc6738);
        if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1a8);
        }
        FUN_140041b80(&local_1a8,&local_1e8);
        local_130 = &local_1a8;
        uStack_1e0 = CONCAT44(0xf,(uint)uStack_1e0);
        local_1e8 = (longlong *)0x10000030000001f;
        local_1c8 = 0x10000030000001f;
        uStack_1c0 = CONCAT44(0xf,(uint)uStack_1e0);
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1c8);
        local_128 = &local_198;
        local_1e8 = (longlong *)CONCAT44(uRam00000001419e68c4,_DAT_1419e68c0);
        uStack_1e0 = CONCAT44(uRam00000001419e68cc,uRam00000001419e68c8);
        if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        FUN_140041b80(&local_188,&local_1e8);
        local_120 = &local_188;
        puVar5 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_1b8,1,CONCAT44(uVar4,DAT_141a0a0d8),&local_130
                              );
        if (puVar5 != &local_178) {
          local_1e8 = (longlong *)*puVar5;
          uStack_1e0 = puVar5[1];
          if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          FUN_140041b80(&local_178,&local_1e8);
        }
        local_118 = &local_178;
        FUN_140e645a0(&local_1e8,gml_Script_StatesVendorSummon,param_1);
        local_1c8 = local_1e8;
        uStack_1c0 = uStack_1e0;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_1c8);
        if ((1 << ((byte)(uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_110 = local_168;
        ppuVar14 = &local_128;
        gml_Script____struct___210_chunk_transition_RoomTransition
                  (param_1,param_2,&local_1d8,4,ppuVar14);
        uVar4 = (undefined4)((ulonglong)ppuVar14 >> 0x20);
        local_138 = 0x12a;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar5 != &local_1a8) {
          local_1e8 = (longlong *)*puVar5;
          uStack_1e0 = puVar5[1];
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1e8);
        }
        local_130 = &local_1a8;
        local_1e8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
        uStack_1e0 = CONCAT44(DAT_141dd4504,uRam0000000141dd4500);
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1e8);
        local_128 = &local_198;
        if (puVar5 != &local_188) {
          local_1e8 = (longlong *)*puVar5;
          uStack_1e0 = puVar5[1];
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1e8);
        }
        local_120 = &local_188;
        local_1e8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
        uStack_1e0 = CONCAT44(DAT_141dd4504,uRam0000000141dd4500);
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_1e8);
        local_118 = &local_178;
        uVar7 = CONCAT44(uVar4,DAT_1419ff4f8);
        puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar7,&local_130);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_1c0 = puVar5[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_1c8 = *puVar5;
        }
        else {
          FUN_1400419b0(&local_1c8,puVar5);
        }
        uStack_1e0._4_4_ = 7;
        local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,1);
        FUN_1400460e0(&local_1c8,&local_1e8);
        if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = (longlong *)local_1c8;
        uStack_1e0 = uStack_1c0;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_1e8);
        if ((1 << ((byte)(uStack_1c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        goto LAB_1405bb4f0;
      }
      local_138 = 0x101;
      if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1b8);
      }
      local_1b8 = 0;
      local_1b0 = 0;
      local_1ac = 5;
      local_1e8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_1e0 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
      if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      FUN_140041b80(&local_188,&local_1e8);
      local_120 = &local_188;
      local_1e8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_1e0._0_4_ = DAT_1419df7b8;
      uStack_1e0._4_4_ = DAT_1419df7bc;
      if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      FUN_140041b80(&local_178,&local_1e8);
      local_118 = &local_178;
      ppuVar13 = &local_120;
      uVar7 = gml_Script_animcurve_lerp(param_1,param_2,&local_1b8,2,ppuVar13);
      cVar2 = FUN_140e491e0(uVar7);
      if (cVar2 != '\0') {
        uStack_1e0._4_4_ = 6;
        ppuVar13 = (undefined8 **)((ulonglong)ppuVar13 & 0xffffffffffffff00);
        local_1e8 = param_1;
        FUN_140e87440(&local_1e8,DAT_141a0a728,0x80000000,&local_b8,ppuVar13,
                      (ulonglong)ppuVar14 & 0xffffffffffffff00);
        if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        uStack_1e0._4_4_ = 0xf;
        local_1e8 = (longlong *)0x100000100000332;
        iVar3 = FUN_140e851f0(&local_b8,&local_1e8,DAT_141955260,0);
        if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        if (iVar3 == 0) {
          local_138 = 0x103;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_14c = 0;
          local_158 = 0;
          FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_158);
          local_138 = 0x104;
          if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          local_fc = 0;
          local_108 = 0x4018000000000000;
          FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_108);
        }
      }
      uVar4 = (undefined4)((ulonglong)ppuVar13 >> 0x20);
      local_138 = 0x108;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      uStack_1e0 = CONCAT44(0xf,(uint)uStack_1e0);
      local_1e8 = (longlong *)0x10000000000007e;
      local_1c8 = 0x10000000000007e;
      uStack_1c0 = CONCAT44(0xf,(uint)uStack_1e0);
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1c8);
      local_130 = &local_1a8;
      ppuVar14 = &local_130;
      uVar12 = CONCAT44(uVar4,DAT_141a02ef8);
      uVar7 = FUN_140e634e0(param_1,param_2,&local_1d8,1,uVar12,ppuVar14);
      cVar2 = FUN_140e491e0(uVar7);
      if (cVar2 != '\0') goto LAB_1405bb521;
      local_138 = 0x10a;
      uStack_1e0._4_4_ = 6;
      uVar15 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
      local_1e8 = param_1;
      FUN_140e87440(&local_1e8,DAT_141a0a728,0x80000000,&local_b8,uVar12 & 0xffffffffffffff00,uVar15
                   );
      if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      uStack_1e0._4_4_ = 0xf;
      local_1e8 = (longlong *)0x100000100000332;
      iVar3 = FUN_140e851f0(&local_b8,&local_1e8,DAT_141955260,0);
      if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if (iVar3 == 0) {
        local_138 = 0x10c;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_14c = 0;
        local_158 = 0x3ff0000000000000;
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_158);
        local_138 = 0x10d;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_fc = 0;
        local_108 = 0;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_108);
        local_138 = 0x10f;
        uStack_1e0._4_4_ = 0xf;
        local_1e8 = (longlong *)0x100000100000333;
        local_1c8 = 0x100000100000333;
        uStack_1c0 = CONCAT44(0xf,(uint)uStack_1e0);
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_1c8);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_f8);
      }
      local_138 = 0x113;
      if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1d8);
      }
      local_1d8 = 0;
      local_1d0 = 0;
      local_1cc = 5;
      local_1e8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_1e0 = CONCAT44(DAT_1419df7bc,DAT_1419df7b8);
      if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1a8);
      }
      FUN_140041b80(&local_1a8,&local_1e8);
      local_130 = &local_1a8;
      local_1e8 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
      uStack_1e0._0_4_ = DAT_1419df7b8;
      uStack_1e0._4_4_ = DAT_1419df7bc;
      if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_198);
      }
      FUN_140041b80(&local_198,&local_1e8);
      local_128 = &local_198;
      ppuVar14 = &local_130;
      uVar7 = gml_Script_animcurve_lerp(param_1,param_2,&local_1d8,2,ppuVar14);
      cVar2 = FUN_140e491e0(uVar7);
      if (cVar2 != '\0') {
        uStack_1e0._4_4_ = 6;
        uVar15 = uVar15 & 0xffffffffffffff00;
        ppuVar14 = (undefined8 **)((ulonglong)ppuVar14 & 0xffffffffffffff00);
        local_1e8 = param_1;
        FUN_140e87440(&local_1e8,DAT_141a0a728,0x80000000,&local_b8,ppuVar14,uVar15);
        if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        uStack_1e0._4_4_ = 0xf;
        local_1e8 = (longlong *)0x100000100000333;
        iVar3 = FUN_140e851f0(&local_b8,&local_1e8,DAT_141955260,0);
        if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        if (iVar3 == 0) {
          local_138 = 0x115;
          uStack_1e0._4_4_ = 0xf;
          local_1e8 = (longlong *)0x100000100000325;
          local_1c8 = 0x100000100000325;
          uStack_1c0 = CONCAT44(0xf,(uint)uStack_1e0);
          if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f8);
          }
          FUN_140041b80(&local_f8,&local_1c8);
          FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_f8);
          local_138 = 0x116;
          if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          local_14c = 0;
          local_158 = 0;
          FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_158);
        }
      }
      local_138 = 0x11a;
      uStack_1e0._4_4_ = 6;
      uVar12 = (ulonglong)ppuVar14 & 0xffffffffffffff00;
      local_1e8 = param_1;
      FUN_140e87440(&local_1e8,DAT_141a0a818,0x80000000,&local_88,uVar12,uVar15 & 0xffffffffffffff00
                   );
      uVar4 = (undefined4)(uVar12 >> 0x20);
      if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      uStack_1e0 = (ulonglong)(uint)uStack_1e0;
      local_1e8 = (longlong *)0x0;
      iVar3 = FUN_140e851f0(&local_88,&local_1e8,DAT_141955260,0);
      if ((1 << ((byte)(uStack_1e0 >> 0x20) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_1e8);
      }
      if (iVar3 == 0) {
        local_138 = 0x11d;
        uStack_1e0 = CONCAT44(0xd,(uint)uStack_1e0);
        local_1e8 = (longlong *)0x0;
        local_1c8 = 0;
        uStack_1c0 = uStack_1e0;
        if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_a8);
        }
        FUN_140041b80(&local_a8,&local_1c8);
        uStack_1e0._4_4_ = 0xf;
        local_1e8 = (longlong *)0x100000000000106;
        FUN_140e87930(&local_1e8,DAT_1419fec58,0x80000000,&local_a8);
        if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_138 = 0x11f;
        if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1d8);
        }
        local_1d8 = 0;
        local_1d0 = 0;
        local_1cc = 5;
        if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1b8);
        }
        local_1b8 = 0;
        local_1b0 = 0;
        local_1ac = 5;
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd438);
        if (puVar6 != &local_1a8) {
          local_1e8 = (longlong *)*puVar6;
          uStack_1e0 = puVar6[1];
          if ((1 << (local_19c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_1a8);
          }
          FUN_140041b80(&local_1a8,&local_1e8);
        }
        local_130 = &local_1a8;
        local_1e8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
        uStack_1e0 = CONCAT44(DAT_141dd4504,uRam0000000141dd4500);
        if ((1 << (local_18c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_198);
        }
        FUN_140041b80(&local_198,&local_1e8);
        local_128 = &local_198;
        if (puVar6 != &local_188) {
          local_1e8 = (longlong *)*puVar6;
          uStack_1e0 = puVar6[1];
          if ((1 << (local_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          FUN_140041b80(&local_188,&local_1e8);
        }
        local_120 = &local_188;
        local_1e8 = (longlong *)CONCAT44(uRam0000000141dd44fc,_DAT_141dd44f8);
        uStack_1e0 = CONCAT44(DAT_141dd4504,uRam0000000141dd4500);
        if ((1 << (local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        FUN_140041b80(&local_178,&local_1e8);
        local_118 = &local_178;
        uVar7 = CONCAT44(uVar4,DAT_1419ff4f8);
        puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_1b8,2,uVar7,&local_130);
        uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
        uStack_1c0 = puVar6[1];
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
          local_1c8 = *puVar6;
        }
        else {
          FUN_1400419b0(&local_1c8,puVar6);
        }
        uStack_1e0._4_4_ = 7;
        local_1e8 = (longlong *)CONCAT44(local_1e8._4_4_,1);
        FUN_1400460e0(&local_1c8,&local_1e8);
        if ((1 << ((byte)uStack_1e0._4_4_ & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1e8);
        }
        local_1e8 = (longlong *)local_1c8;
        uStack_1e0 = uStack_1c0;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_168);
        }
        FUN_140041b80(local_168,&local_1e8);
        if ((1 << ((byte)(uStack_1c0 >> 0x20) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_1c8);
        }
        local_110 = local_168;
        FUN_140e634e0(param_1,param_2,&local_1d8,3,CONCAT44(uVar4,DAT_1419fd648),&local_120);
      }
      local_138 = 0x122;
      uStack_1e0 = CONCAT44(0xd,(uint)uStack_1e0);
      local_1e8 = (longlong *)0x0;
      if (&local_1e8 != puVar5) {
        local_1c8 = 0;
        uStack_1c0 = CONCAT44(0xd,(uint)uStack_1e0);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        FUN_140041b80(puVar5,&local_1c8);
      }
      local_138 = 0x12d;
    }
  }
  else if (iVar3 == 2) {
    local_138 = 0x131;
    if ((1 << (bVar1 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    local_1d8 = 0;
    local_1d0 = 0;
    local_1cc = 5;
    uVar7 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
    FUN_140e63610(param_1,param_2,&local_1d8,0,uVar7,0);
    local_138 = 0x132;
  }
  else if (iVar3 == 3) {
    local_138 = 0x136;
  }
  goto LAB_1405bb68d;
code_r0x0001405b9b2d:
  uVar9 = uVar9 + 1;
  if (3 < uVar9) {
LAB_1405bb68d:
    if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_98);
    }
    if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_d8);
    }
    if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_c8);
    }
    if ((1 << ((byte)local_1ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1b8);
    }
    if ((1 << ((byte)local_1cc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_1d8);
    }
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_78);
    }
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
    if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    _eh_vector_destructor_iterator_(&local_1a8,0x10,5,FUN_140041b30);
    DAT_141dc7a50 = (undefined8 *)local_148;
    return param_3;
  }
  goto LAB_1405b9b00;
}

