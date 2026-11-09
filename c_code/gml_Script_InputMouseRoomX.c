// gml_Script_InputMouseRoomX @ 0x14033cbc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 **
gml_Script_InputMouseRoomX
          (undefined8 param_1,undefined8 param_2,undefined1 **param_3,undefined4 param_4,
          undefined8 param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 **ppuVar7;
  longlong *plVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  code *pcVar13;
  ulonglong uVar14;
  undefined4 uVar15;
  ulonglong in_stack_fffffffffffffe70;
  undefined8 local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  longlong local_168;
  byte local_15c;
  longlong local_158;
  byte local_14c;
  undefined1 local_148 [12];
  byte local_13c;
  undefined8 local_138;
  char *local_130;
  undefined4 local_128;
  undefined1 *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  longlong *local_100;
  undefined1 *local_f8;
  undefined1 *local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  uint local_68 [2];
  undefined8 *local_60;
  
  local_130 = "gml_Script_InputMouseReleased";
  local_138 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_138;
  local_128 = 7;
  FUN_140041df0(local_68,param_4,1,param_5);
  pcVar13 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_168,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  uStack_10c = 0xffffff;
  local_118 = (undefined1 *)0x0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_16c = 0;
  local_178 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined1 *)0x0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde428) {
    _Init_thread_header(&DAT_141dde428);
    if (DAT_141dde428 == -1) {
      DAT_141dde420 = (longlong *)FUN_140e63aa0(DAT_1419f1f78);
      _Init_thread_footer(&DAT_141dde428);
    }
  }
  local_128 = 7;
  plVar8 = &DAT_1419df7b0;
  uVar9 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar4 = &DAT_1419df7b0;
  }
  else {
    puVar4 = (undefined8 *)*local_60;
  }
  iVar3 = FUN_140e851f0(puVar4,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar3 == 0) {
    local_128 = 7;
    if ((int)local_68[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    *(undefined4 *)((longlong)puVar4 + 0xc) = 0;
    *puVar4 = 0x3ff0000000000000;
  }
  if (DAT_141ddc100 == '\0') {
    FUN_140e64380(DAT_141dde420,"gml_Script_InputMouseReleased");
    FUN_140e64380(param_1,"gml_Script_InputMouseReleased");
  }
  local_128 = 9;
  if (DAT_141ddc100 == '\0') {
    DAT_141ddc100 = '\x01';
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    puVar4 = (undefined8 *)(**(code **)(*DAT_141dde420 + 0x10))(DAT_141dde420,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde420);
    pcVar13 = (code *)0x0;
    puVar5 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_178,0,0);
    if (puVar5 != puVar4) {
      local_188 = (undefined1 *)*puVar5;
      uStack_180 = *(undefined4 *)(puVar5 + 1);
      uStack_17c = *(undefined4 *)((longlong)puVar5 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar4);
      }
      FUN_140041b80(puVar4,&local_188);
    }
    FUN_140e60910(1);
  }
  local_128 = 0xe;
  uVar6 = (**(code **)(*DAT_141dde420 + 8))(DAT_141dde420,DAT_1419fcb48);
  in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
  uVar14 = (ulonglong)pcVar13 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a02bc8,0x80000000,&local_b8,uVar14,in_stack_fffffffffffffe70);
  cVar1 = FUN_140e491e0(&local_b8);
  if (cVar1 != '\0') {
    local_128 = 0x10;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    if (((int)local_68[0] < 1) || (plVar8 = (longlong *)*local_60, plVar8 != &local_168)) {
      local_188 = (undefined1 *)*plVar8;
      uStack_180 = (undefined4)plVar8[1];
      uStack_17c = *(undefined4 *)((longlong)plVar8 + 0xc);
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_188);
    }
    local_108 = &local_168;
    ppuVar7 = (undefined1 **)gml_Script_InputMouseDeviceX(param_1,param_2,&local_178,1,&local_108);
    if (ppuVar7 != param_3) {
      local_188 = *ppuVar7;
      uStack_180 = *(undefined4 *)(ppuVar7 + 1);
      uStack_17c = *(undefined4 *)((longlong)ppuVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_188);
    }
    goto LAB_14033d868;
  }
  local_128 = 0x13;
  uVar6 = (**(code **)(*DAT_141dde420 + 8))(DAT_141dde420,DAT_1419fcb48);
  in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
  uVar14 = uVar14 & 0xffffffffffffff00;
  FUN_140e87440(uVar6,DAT_141a02c28,0x80000000,&local_c8,uVar14,in_stack_fffffffffffffe70);
  cVar1 = FUN_140e491e0(&local_c8);
  if (cVar1 == '\0') {
    local_128 = 0x15;
    if ((int)local_68[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_60;
    }
    local_9c = 0;
    uVar12 = 0x3ff00000;
    local_a8 = 0x3ff0000000000000;
    iVar3 = FUN_140e851f0(puVar4,&local_a8,DAT_141955260,0);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if (iVar3 != 0) {
      if ((int)local_68[0] < 1) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)*local_60;
      }
      uStack_dc = 0;
      local_e8 = &DAT_bff0000000000000;
      iVar3 = FUN_140e851f0(puVar4,&local_e8,DAT_141955260,0);
      if ((1 << ((byte)uStack_dc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e8);
      }
      if (iVar3 != 0) {
        if ((int)local_68[0] < 1) {
          puVar4 = &DAT_1419df7b0;
        }
        else {
          puVar4 = (undefined8 *)*local_60;
        }
        uStack_17c = 0;
        local_188 = (undefined1 *)0x0;
        iVar3 = FUN_140e851f0(puVar4,&local_188,DAT_141955260,0);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        if (iVar3 != 0) {
          local_128 = 0x18;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          uVar15 = (undefined4)(uVar14 >> 0x20);
          local_178 = 0;
          local_170 = 0;
          local_16c = 5;
          local_188 = (undefined1 *)CONCAT44(uRam0000000141dc6494,_DAT_141dc6490);
          uStack_180 = uRam0000000141dc6498;
          uStack_17c = uRam0000000141dc649c;
          if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          FUN_140041b80(&local_168,&local_188);
          local_108 = &local_168;
          if (((int)local_68[0] < 1) || (plVar8 = (longlong *)*local_60, plVar8 != &local_158)) {
            local_188 = (undefined1 *)*plVar8;
            uStack_180 = (undefined4)plVar8[1];
            uStack_17c = *(undefined4 *)((longlong)plVar8 + 0xc);
            if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_158);
            }
            FUN_140041b80(&local_158,&local_188);
          }
          local_100 = &local_158;
          ppuVar7 = (undefined1 **)
                    FUN_140e634e0(param_1,param_2,&local_178,2,CONCAT44(uVar15,DAT_141a02c48),
                                  &local_108);
          if (ppuVar7 != param_3) {
            local_188 = *ppuVar7;
            uStack_180 = *(undefined4 *)(ppuVar7 + 1);
            uStack_17c = *(undefined4 *)((longlong)ppuVar7 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            FUN_140041b80(param_3,&local_188);
          }
          goto LAB_14033d868;
        }
      }
    }
    local_128 = 0x1b;
    uVar6 = (**(code **)(*DAT_141dde420 + 8))(DAT_141dde420,DAT_1419fcb48);
    uVar14 = uVar14 & 0xffffffffffffff00;
    FUN_140e87440(uVar6,DAT_141a01648,0x80000000,&local_d8,uVar14,
                  in_stack_fffffffffffffe70 & 0xffffffffffffff00);
    uVar15 = (undefined4)(uVar14 >> 0x20);
    cVar1 = FUN_140e491e0(&local_d8);
    if (cVar1 == '\0') {
      local_128 = 0x3a;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      local_188 = (undefined1 *)CONCAT44(uRam0000000141dc6494,_DAT_141dc6490);
      uStack_180 = uRam0000000141dc6498;
      uStack_17c = uRam0000000141dc649c;
      if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_168);
      }
      FUN_140041b80(&local_168,&local_188);
      local_108 = &local_168;
      local_188 = (undefined1 *)CONCAT44(uRam00000001419e4174,_DAT_1419e4170);
      uStack_180 = uRam00000001419e4178;
      uStack_17c = uRam00000001419e417c;
      if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      FUN_140041b80(&local_158,&local_188);
      local_100 = &local_158;
      uVar6 = CONCAT44(uVar15,DAT_141a02c48);
      ppuVar7 = (undefined1 **)FUN_140e634e0(param_1,param_2,&local_178,2,uVar6,&local_108);
      uVar15 = (undefined4)((ulonglong)uVar6 >> 0x20);
      if (ppuVar7 != &local_118) {
        local_188 = *ppuVar7;
        uStack_180 = *(undefined4 *)(ppuVar7 + 1);
        uStack_17c = *(undefined4 *)((longlong)ppuVar7 + 0xc);
        if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_188);
      }
    }
    else {
      local_128 = 0x1f;
      local_188 = (undefined1 *)0x3ff0000000000000;
      uStack_17c = 0xd;
      local_e8 = (undefined1 *)0x3ff0000000000000;
      uStack_e0 = uStack_180;
      uStack_dc = 0xd;
      if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_e8);
    }
    local_128 = 0x3d;
    if ((int)local_68[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_60;
    }
    uStack_17c = 0;
    local_188 = (undefined1 *)0x3ff0000000000000;
    iVar3 = FUN_140e851f0(puVar4,&local_188,DAT_141955260,0);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if (iVar3 == 0) {
      local_128 = 0x3f;
      if (&local_118 != param_3) {
        local_188 = local_118;
        uStack_180 = uStack_110;
        uStack_17c = uStack_10c;
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        FUN_140041b80(param_3,&local_188);
      }
      goto LAB_14033d868;
    }
    local_128 = 0x41;
    if ((int)local_68[0] < 1) {
      puVar4 = &DAT_1419df7b0;
    }
    else {
      puVar4 = (undefined8 *)*local_60;
    }
    uStack_17c = 0;
    local_188 = &DAT_bff0000000000000;
    iVar3 = FUN_140e851f0(puVar4,&local_188,DAT_141955260,0);
    if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_188);
    }
    if (iVar3 == 0) {
      local_128 = 0x43;
      cVar1 = FUN_140e491e0(&local_118);
      if (cVar1 == '\0') {
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        local_188 = (undefined1 *)CONCAT44(uRam0000000141dc6494,_DAT_141dc6490);
        uStack_180 = uRam0000000141dc6498;
        uStack_17c = uRam0000000141dc649c;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_188);
        uVar10 = _DAT_1419e4180;
        uVar11 = uRam00000001419e4184;
        uStack_180 = uRam00000001419e4188;
        uStack_17c = uRam00000001419e418c;
LAB_14033d689:
        local_108 = &local_168;
        local_188 = (undefined1 *)CONCAT44(uVar11,uVar10);
        if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        FUN_140041b80(&local_158,&local_188);
        local_100 = &local_158;
        uVar6 = FUN_140e634e0(param_1,param_2,&local_178,2,CONCAT44(uVar15,DAT_141a02c48),&local_108
                             );
        cVar2 = FUN_140e491e0(uVar6);
      }
      else {
        cVar2 = '\x01';
      }
    }
    else {
      local_128 = 0x45;
      if ((int)local_68[0] < 1) {
        puVar4 = &DAT_1419df7b0;
      }
      else {
        puVar4 = (undefined8 *)*local_60;
      }
      uStack_17c = 0;
      local_188 = (undefined1 *)0x0;
      iVar3 = FUN_140e851f0(puVar4,&local_188,DAT_141955260,0);
      if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_188);
      }
      if (iVar3 != 0) {
        local_128 = 0x4a;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        local_188 = (undefined1 *)CONCAT44(uRam0000000141dd08bc,_DAT_141dd08b8);
        uStack_180 = uRam0000000141dd08c0;
        uStack_17c = DAT_141dd08c4;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_188);
        local_108 = &local_168;
        if (((int)local_68[0] < 1) || (plVar8 = (longlong *)*local_60, plVar8 != &local_158)) {
          local_188 = (undefined1 *)*plVar8;
          uStack_180 = (undefined4)plVar8[1];
          uStack_17c = *(undefined4 *)((longlong)plVar8 + 0xc);
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_158);
          }
          FUN_140041b80(&local_158,&local_188);
        }
        local_100 = &local_158;
        local_188 = (undefined1 *)CONCAT44(uRam0000000141dd08ac,_DAT_141dd08a8);
        uStack_180 = uRam0000000141dd08b0;
        uStack_17c = DAT_141dd08b4;
        if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_148);
        }
        FUN_140041b80(local_148,&local_188);
        local_f8 = local_148;
        FUN_14008e020(param_1,param_2,&local_178,3,&local_108);
        local_128 = 0x4c;
        goto LAB_14033d85a;
      }
      local_128 = 0x47;
      cVar2 = '\0';
      cVar1 = FUN_140e491e0(&local_118);
      if (cVar1 == '\0') {
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        local_188 = (undefined1 *)CONCAT44(uRam0000000141dc6494,_DAT_141dc6490);
        uStack_180 = uRam0000000141dc6498;
        uStack_17c = uRam0000000141dc649c;
        if ((1 << (local_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        FUN_140041b80(&local_168,&local_188);
        uVar10 = _DAT_141dc6490;
        uVar11 = uRam0000000141dc6494;
        uStack_180 = uRam0000000141dc6498;
        uStack_17c = uRam0000000141dc649c;
        goto LAB_14033d689;
      }
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(param_3);
    }
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    if (cVar2 == '\0') {
      uVar12 = 0;
    }
    *param_3 = (undefined1 *)((ulonglong)uVar12 << 0x20);
  }
  else {
    local_128 = 0x13;
LAB_14033d85a:
    *param_3 = (undefined1 *)0x0;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  }
LAB_14033d868:
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)uStack_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_168,0x10,3,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar4 = local_60;
    do {
      puVar5 = (undefined8 *)*puVar4;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar5);
      }
      *puVar5 = 0;
      *(undefined4 *)(puVar5 + 1) = 0;
      *(undefined4 *)((longlong)puVar5 + 0xc) = 5;
      puVar4 = puVar4 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_138;
  return param_3;
}

