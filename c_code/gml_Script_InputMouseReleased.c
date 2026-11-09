// gml_Script_InputMouseReleased @ 0x14033bd90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong *
gml_Script_InputMouseReleased
          (undefined8 param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  undefined8 *puVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  ulonglong uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  code *pcVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  ulonglong in_stack_fffffffffffffe80;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined1 local_158 [12];
  byte local_14c;
  longlong local_148;
  byte local_13c;
  undefined1 local_138 [12];
  byte local_12c;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined1 *local_100;
  longlong *local_f8;
  undefined1 *local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 *local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
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
  
  local_110 = "gml_Script_InputMousePressed";
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  local_108 = 7;
  FUN_140041df0(local_68,param_4,1,param_5);
  pcVar16 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_158,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_ac = 0xffffff;
  local_b8 = 0;
  local_bc = 0xffffff;
  local_c8 = 0;
  uStack_11c = 0xffffff;
  local_128 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_16c = 0;
  local_178 = 0;
  local_8c = 0;
  local_98 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  lVar1 = *(longlong *)ThreadLocalStoragePointer;
  if ((*(int *)(lVar1 + 0x18) < DAT_141dde3d0) &&
     (_Init_thread_header(&DAT_141dde3d0), DAT_141dde3d0 == -1)) {
    DAT_141dde418 = (longlong *)FUN_140e63aa0(DAT_1419f1ef8);
    _Init_thread_footer(&DAT_141dde3d0);
  }
  local_108 = 7;
  plVar11 = &DAT_1419df7b0;
  uVar12 = (ulonglong)local_68[0];
  if ((int)local_68[0] < 1) {
    puVar9 = &DAT_1419df7b0;
  }
  else {
    puVar9 = (undefined8 *)*local_60;
  }
  iVar5 = FUN_140e851f0(puVar9,&DAT_1419df7b0,DAT_141955260,0);
  if (iVar5 == 0) {
    local_108 = 7;
    if ((int)local_68[0] < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_60;
    }
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar9 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar9);
    }
    *(undefined4 *)((longlong)puVar9 + 0xc) = 0;
    *puVar9 = 0x3ff0000000000000;
  }
  if (DAT_141ddc0ff == '\0') {
    FUN_140e64380(DAT_141dde418,"gml_Script_InputMousePressed");
    FUN_140e64380(param_1,"gml_Script_InputMousePressed");
  }
  local_108 = 9;
  if (DAT_141ddc0ff == '\0') {
    DAT_141ddc0ff = '\x01';
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    plVar6 = (longlong *)(**(code **)(*DAT_141dde418 + 0x10))(DAT_141dde418,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde418);
    pcVar16 = (code *)0x0;
    plVar7 = (longlong *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_178,0,0);
    if (plVar7 != plVar6) {
      local_168 = *plVar7;
      uStack_160 = (undefined4)plVar7[1];
      uStack_15c = *(undefined4 *)((longlong)plVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)plVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(plVar6);
      }
      FUN_140041b80(plVar6,&local_168);
    }
    FUN_140e60910(1);
  }
  local_108 = 10;
  uVar8 = (**(code **)(*DAT_141dde418 + 8))(DAT_141dde418,DAT_1419fcb48);
  in_stack_fffffffffffffe80 = in_stack_fffffffffffffe80 & 0xffffffffffffff00;
  uVar17 = (ulonglong)pcVar16 & 0xffffffffffffff00;
  FUN_140e87440(uVar8,DAT_141a02c28,0x80000000,&local_b8,uVar17,in_stack_fffffffffffffe80);
  cVar3 = FUN_140e491e0(&local_b8);
  if (cVar3 == '\0') {
    local_108 = 0xc;
    if ((int)local_68[0] < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_60;
    }
    local_9c = 0;
    uVar15 = 0x3ff00000;
    local_a8 = 0x3ff0000000000000;
    iVar5 = FUN_140e851f0(puVar9,&local_a8,DAT_141955260,0);
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    if (iVar5 != 0) {
      if ((int)local_68[0] < 1) {
        puVar9 = &DAT_1419df7b0;
      }
      else {
        puVar9 = (undefined8 *)*local_60;
      }
      uStack_cc = 0;
      local_d8 = &DAT_bff0000000000000;
      iVar5 = FUN_140e851f0(puVar9,&local_d8,DAT_141955260,0);
      if ((1 << ((byte)uStack_cc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d8);
      }
      if (iVar5 != 0) {
        if ((int)local_68[0] < 1) {
          puVar9 = &DAT_1419df7b0;
        }
        else {
          puVar9 = (undefined8 *)*local_60;
        }
        uStack_15c = 0;
        local_168 = 0;
        iVar5 = FUN_140e851f0(puVar9,&local_168,DAT_141955260,0);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        if (iVar5 != 0) {
          local_108 = 0xf;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          uVar18 = (undefined4)(uVar17 >> 0x20);
          local_178 = 0;
          local_170 = 0;
          local_16c = 5;
          local_168 = CONCAT44(uRam0000000141dc6484,_DAT_141dc6480);
          uStack_160 = uRam0000000141dc6488;
          uStack_15c = uRam0000000141dc648c;
          if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_158);
          }
          FUN_140041b80(local_158,&local_168);
          local_100 = local_158;
          if (((int)local_68[0] < 1) || (plVar11 = (longlong *)*local_60, plVar11 != &local_148)) {
            local_168 = *plVar11;
            uStack_160 = (undefined4)plVar11[1];
            uStack_15c = *(undefined4 *)((longlong)plVar11 + 0xc);
            if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            FUN_140041b80(&local_148,&local_168);
          }
          local_f8 = &local_148;
          plVar11 = (longlong *)
                    FUN_140e634e0(param_1,param_2,&local_178,2,CONCAT44(uVar18,DAT_141a029d8),
                                  &local_100);
          if (plVar11 != param_3) {
            local_168 = *plVar11;
            uStack_160 = (undefined4)plVar11[1];
            uStack_15c = *(undefined4 *)((longlong)plVar11 + 0xc);
            if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(param_3);
            }
            FUN_140041b80(param_3,&local_168);
          }
          goto LAB_14033c2ff;
        }
      }
    }
    local_108 = 0x12;
    uVar8 = (**(code **)(*DAT_141dde418 + 8))(DAT_141dde418,DAT_1419fcb48);
    uVar17 = uVar17 & 0xffffffffffffff00;
    FUN_140e87440(uVar8,DAT_141a01648,0x80000000,&local_c8,uVar17,
                  in_stack_fffffffffffffe80 & 0xffffffffffffff00);
    cVar3 = FUN_140e491e0(&local_c8);
    uVar18 = (undefined4)(uVar17 >> 0x20);
    if (cVar3 == '\0') {
      local_108 = 0x31;
      if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_178);
      }
      local_178 = 0;
      local_170 = 0;
      local_16c = 5;
      local_168 = CONCAT44(uRam0000000141dc6484,_DAT_141dc6480);
      uStack_160 = uRam0000000141dc6488;
      uStack_15c = uRam0000000141dc648c;
      if ((1 << ((byte)_local_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_158);
      }
      FUN_140041b80(local_158,&local_168);
      local_100 = local_158;
      local_168 = CONCAT44(uRam00000001419e4154,_DAT_1419e4150);
      uStack_160 = uRam00000001419e4158;
      uStack_15c = uRam00000001419e415c;
      if ((1 << ((byte)_local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_168);
      local_f8 = &local_148;
      uVar17 = CONCAT44(uVar18,DAT_141a029d8);
      plVar6 = (longlong *)FUN_140e634e0(param_1,param_2,&local_178,2,uVar17,&local_100);
      if (plVar6 != &local_128) {
        local_168 = *plVar6;
        uStack_160 = (undefined4)plVar6[1];
        uStack_15c = *(undefined4 *)((longlong)plVar6 + 0xc);
        if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_168);
      }
    }
    else {
      local_108 = 0x16;
      local_168 = 0x3ff0000000000000;
      uStack_15c = 0xd;
      local_d8 = (undefined1 *)0x3ff0000000000000;
      uStack_d0 = uStack_160;
      uStack_cc = 0xd;
      if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      FUN_140041b80(&local_128,&local_d8);
    }
    uVar10 = 0;
    local_108 = 0x34;
    if ((int)local_68[0] < 1) {
      puVar9 = &DAT_1419df7b0;
    }
    else {
      puVar9 = (undefined8 *)*local_60;
    }
    local_dc = *(undefined4 *)((longlong)puVar9 + 0xc);
    local_e0 = *(undefined4 *)(puVar9 + 1);
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) == 0) {
      local_e8 = *puVar9;
    }
    else {
      FUN_1400419b0(&local_e8);
    }
    if ((*(int *)(lVar1 + 0x18) < DAT_141dde414) &&
       (_Init_thread_header(&DAT_141dde414), DAT_141dde414 == -1)) {
      _DAT_141dde3e4 = 0;
      _DAT_141dde3d8 = 0;
      _DAT_141dde3f8 = 0;
      _DAT_141dde3ec = &DAT_bff0000000000000;
      _DAT_141dde3fc = 1;
      _DAT_141dde40c = 0;
      _DAT_141dde400 = 0x3ff0000000000000;
      _DAT_141dde410 = 2;
      atexit((_func_5014 *)&LAB_1414776c0);
      _Init_thread_footer(&DAT_141dde414);
    }
    do {
      iVar5 = FUN_140e851f0(&DAT_141dde3d8 + (longlong)(int)uVar10 * 0x14,&local_e8,DAT_141955260,0)
      ;
      uVar18 = (undefined4)(uVar17 >> 0x20);
      if (iVar5 == 0) {
        iVar5 = (&DAT_141dde3e8)[(longlong)(int)uVar10 * 5];
        if (iVar5 == 0) {
          local_108 = 0x36;
          cVar4 = '\0';
          cVar3 = FUN_140e491e0(&local_128);
          if (cVar3 == '\0') {
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            local_178 = 0;
            local_170 = 0;
            local_16c = 5;
            local_168 = CONCAT44(uRam0000000141dc6484,_DAT_141dc6480);
            uStack_160 = uRam0000000141dc6488;
            uStack_15c = uRam0000000141dc648c;
            if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_158);
            }
            FUN_140041b80(local_158,&local_168);
            uVar13 = _DAT_141dc6480;
            uVar14 = uRam0000000141dc6484;
            uStack_160 = uRam0000000141dc6488;
            uStack_15c = uRam0000000141dc648c;
            goto LAB_14033c9ec;
          }
        }
        else {
          if (iVar5 != 1) {
            if (iVar5 == 2) {
              local_108 = 0x38;
              if (&local_128 != param_3) {
                local_168 = local_128;
                uStack_160 = uStack_120;
                uStack_15c = uStack_11c;
                if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(param_3);
                }
                FUN_140041b80(param_3,&local_168);
              }
              goto LAB_14033ca99;
            }
            break;
          }
          local_108 = 0x37;
          cVar3 = FUN_140e491e0(&local_128);
          if (cVar3 == '\0') {
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            local_178 = 0;
            local_170 = 0;
            local_16c = 5;
            local_168 = CONCAT44(uRam0000000141dc6484,_DAT_141dc6480);
            uStack_160 = uRam0000000141dc6488;
            uStack_15c = uRam0000000141dc648c;
            if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_158);
            }
            FUN_140041b80(local_158,&local_168);
            uVar13 = _DAT_1419e4160;
            uVar14 = uRam00000001419e4164;
            uStack_160 = uRam00000001419e4168;
            uStack_15c = uRam00000001419e416c;
LAB_14033c9ec:
            local_100 = local_158;
            local_168 = CONCAT44(uVar14,uVar13);
            if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            FUN_140041b80(&local_148,&local_168);
            local_f8 = &local_148;
            uVar8 = FUN_140e634e0(param_1,param_2,&local_178,2,CONCAT44(uVar18,DAT_141a029d8),
                                  &local_100);
            cVar4 = FUN_140e491e0(uVar8);
          }
          else {
            cVar4 = '\x01';
          }
        }
        if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(param_3);
        }
        *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
        if (cVar4 == '\0') {
          uVar15 = 0;
        }
        *param_3 = (ulonglong)uVar15 << 0x20;
        goto LAB_14033ca99;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < 3);
    local_108 = 0x3b;
    if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_178);
    }
    local_178 = 0;
    local_170 = 0;
    local_16c = 5;
    local_168 = CONCAT44(uRam0000000141dd088c,_DAT_141dd0888);
    uStack_160 = uRam0000000141dd0890;
    uStack_15c = DAT_141dd0894;
    if ((1 << (local_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_158);
    }
    FUN_140041b80(local_158,&local_168);
    local_100 = local_158;
    if (((int)local_68[0] < 1) || (plVar11 = (longlong *)*local_60, plVar11 != &local_148)) {
      local_168 = *plVar11;
      uStack_160 = (undefined4)plVar11[1];
      uStack_15c = *(undefined4 *)((longlong)plVar11 + 0xc);
      if ((1 << (local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      FUN_140041b80(&local_148,&local_168);
    }
    local_f8 = &local_148;
    local_168 = CONCAT44(uRam0000000141dd089c,_DAT_141dd0898);
    uStack_160 = uRam0000000141dd08a0;
    uStack_15c = DAT_141dd08a4;
    if ((1 << (local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_138);
    }
    FUN_140041b80(local_138,&local_168);
    local_f0 = local_138;
    FUN_14008e020(param_1,param_2,&local_178,3,&local_100);
    local_108 = 0x3d;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
LAB_14033ca99:
    if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e8);
    }
  }
  else {
    local_108 = 10;
    *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
    *param_3 = 0;
  }
LAB_14033c2ff:
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
  if ((1 << ((byte)uStack_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(local_158,0x10,3,FUN_140041b30);
  if (0 < (int)local_68[0]) {
    puVar9 = local_60;
    do {
      puVar2 = (undefined8 *)*puVar9;
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar2);
      }
      *puVar2 = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      *(undefined4 *)((longlong)puVar2 + 0xc) = 5;
      puVar9 = puVar9 + 1;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  FUN_140e4cd60(local_60);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return param_3;
}

