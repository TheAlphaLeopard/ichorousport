// gml_Script_InputMouseDeviceX @ 0x140339ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 **
gml_Script_InputMouseDeviceX
          (undefined8 param_1,undefined8 param_2,undefined1 **param_3,int param_4,
          undefined8 *param_5)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 **ppuVar8;
  undefined8 uVar9;
  longlong *plVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  code *pcVar14;
  undefined4 uVar16;
  ulonglong uVar15;
  ulonglong in_stack_fffffffffffffea0;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [12];
  byte local_11c;
  longlong local_118;
  byte local_10c;
  undefined1 local_108 [12];
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined1 *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined1 *local_98;
  longlong *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 local_6c;
  
  local_e0 = "gml_Script___InputMouseCheckRaw";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0xf;
  pcVar14 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_6c = 0xffffff;
  local_78 = 0;
  uStack_bc = 0xffffff;
  local_c8 = (undefined1 *)0x0;
  local_13c = 0;
  local_148 = 0;
  local_9c = 0;
  local_a8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = (undefined1 *)0x0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141dde36c) {
    _Init_thread_header(&DAT_141dde36c);
    if (DAT_141dde36c == -1) {
      DAT_141dde370 = (longlong *)FUN_140e63aa0(DAT_1419f1cd8);
      _Init_thread_footer(&DAT_141dde36c);
    }
  }
  if (DAT_141ddc0f8 == '\0') {
    FUN_140e64380(DAT_141dde370,"gml_Script___InputMouseCheckRaw");
    FUN_140e64380(param_1,"gml_Script___InputMouseCheckRaw");
  }
  local_d8 = 0x11;
  if (DAT_141ddc0f8 == '\0') {
    DAT_141ddc0f8 = '\x01';
    puVar6 = (undefined8 *)(**(code **)(*DAT_141dde370 + 0x10))(DAT_141dde370,DAT_1419fcb48);
    FUN_140e609c0(DAT_141dde370);
    pcVar14 = (code *)0x0;
    puVar7 = (undefined8 *)
             gml_Script__array_anon_215___InputSystemCallbackArray___InputSystemCallbackArray
                       (param_1,param_2,&local_148,0,0);
    if (puVar7 != puVar6) {
      local_158 = (undefined1 *)*puVar7;
      uStack_150 = *(undefined4 *)(puVar7 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar7 + 0xc);
      if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(puVar6);
      }
      FUN_140041b80(puVar6,&local_158);
    }
    FUN_140e60910(1);
  }
  local_d8 = 0x13;
  plVar10 = &DAT_1419df7b0;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  local_12c = 0;
  uVar13 = 0x3ff00000;
  local_138 = 0x3ff0000000000000;
  iVar5 = FUN_140e851f0(puVar6,&local_138,DAT_141955260,0);
  if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar5 != 0) {
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
    uStack_ac = 0;
    local_b8 = &DAT_bff0000000000000;
    iVar5 = FUN_140e851f0(puVar6,&local_b8,DAT_141955260,0);
    if ((1 << ((byte)uStack_ac & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_b8);
    }
    if (iVar5 != 0) {
      if (param_4 < 1) {
        puVar6 = &DAT_1419df7b0;
      }
      else {
        puVar6 = (undefined8 *)*param_5;
      }
      uStack_14c = 0;
      local_158 = (undefined1 *)0x0;
      iVar5 = FUN_140e851f0(puVar6,&local_158,DAT_141955260,0);
      if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_158);
      }
      if (iVar5 != 0) {
        local_d8 = 0x16;
        if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        uVar16 = (undefined4)((ulonglong)pcVar14 >> 0x20);
        local_148 = 0;
        local_140 = 0;
        local_13c = 5;
        local_158 = (undefined1 *)CONCAT44(uRam0000000141dc6474,_DAT_141dc6470);
        uStack_150 = uRam0000000141dc6478;
        uStack_14c = uRam0000000141dc647c;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_128);
        }
        FUN_140041b80(local_128,&local_158);
        local_98 = local_128;
        if ((param_4 < 1) || (plVar10 = (longlong *)*param_5, plVar10 != &local_118)) {
          local_158 = (undefined1 *)*plVar10;
          uStack_150 = (undefined4)plVar10[1];
          uStack_14c = *(undefined4 *)((longlong)plVar10 + 0xc);
          if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_118);
          }
          FUN_140041b80(&local_118,&local_158);
        }
        local_90 = &local_118;
        ppuVar8 = (undefined1 **)
                  FUN_140e634e0(param_1,param_2,&local_148,2,CONCAT44(uVar16,DAT_1419fe558),
                                &local_98);
        if (ppuVar8 != param_3) {
          local_158 = *ppuVar8;
          uStack_150 = *(undefined4 *)(ppuVar8 + 1);
          uStack_14c = *(undefined4 *)((longlong)ppuVar8 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(param_3);
          }
          FUN_140041b80(param_3,&local_158);
        }
        goto LAB_14033a6f9;
      }
    }
  }
  local_d8 = 0x19;
  uVar9 = (**(code **)(*DAT_141dde370 + 8))(DAT_141dde370,DAT_1419fcb48);
  uVar15 = (ulonglong)pcVar14 & 0xffffffffffffff00;
  FUN_140e87440(uVar9,DAT_141a01648,0x80000000,&local_78,uVar15,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar16 = (undefined4)(uVar15 >> 0x20);
  cVar3 = FUN_140e491e0(&local_78);
  if (cVar3 == '\0') {
    if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a8);
    }
    local_a8 = 0;
    local_a0 = 0;
    local_9c = 5;
    local_b8 = (undefined1 *)CONCAT44(uRam0000000141dc6474,_DAT_141dc6470);
    uStack_b0 = uRam0000000141dc6478;
    uStack_ac = uRam0000000141dc647c;
    if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_108);
    }
    FUN_140041b80(local_108,&local_b8);
    local_88 = local_108;
    local_b8 = (undefined1 *)CONCAT44(uRam00000001419e4144,_DAT_1419e4140);
    uStack_b0 = uRam00000001419e4148;
    uStack_ac = uRam00000001419e414c;
    if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_f8);
    }
    FUN_140041b80(local_f8,&local_b8);
    local_80 = local_f8;
    uVar9 = CONCAT44(uVar16,DAT_1419fe558);
    puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_a8,2,uVar9,&local_88);
    uVar16 = (undefined4)((ulonglong)uVar9 >> 0x20);
    local_12c = *(undefined4 *)((longlong)puVar6 + 0xc);
    local_130 = *(undefined4 *)(puVar6 + 1);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) == 0) {
      local_138 = *puVar6;
    }
    else {
      FUN_1400419b0(&local_138,puVar6);
    }
    puVar6 = &local_138;
    bVar2 = false;
    bVar1 = true;
  }
  else {
    uStack_14c = 0xd;
    local_158 = (undefined1 *)0x3ff0000000000000;
    puVar6 = &local_158;
    bVar2 = true;
    bVar1 = false;
  }
  uVar11 = uStack_14c;
  local_b8 = (undefined1 *)*puVar6;
  uStack_b0 = *(undefined4 *)(puVar6 + 1);
  uStack_ac = *(undefined4 *)((longlong)puVar6 + 0xc);
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  FUN_140041b80(&local_c8,&local_b8);
  if (bVar1) {
    if ((1 << ((byte)local_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
  }
  if ((bVar2) && ((1 << ((byte)uVar11 & 0x1f) & 0x46U) != 0)) {
    FUN_140041a50(&local_158);
  }
  local_d8 = 0x1b;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  uStack_14c = 0;
  local_158 = (undefined1 *)0x3ff0000000000000;
  iVar5 = FUN_140e851f0(puVar6,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar5 == 0) {
    local_d8 = 0x1d;
    if (&local_c8 != param_3) {
      local_158 = local_c8;
      uStack_150 = uStack_c0;
      uStack_14c = uStack_bc;
      if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(param_3);
      }
      FUN_140041b80(param_3,&local_158);
    }
    goto LAB_14033a6f9;
  }
  local_d8 = 0x1f;
  if (param_4 < 1) {
    puVar6 = &DAT_1419df7b0;
  }
  else {
    puVar6 = (undefined8 *)*param_5;
  }
  uStack_14c = 0;
  local_158 = &DAT_bff0000000000000;
  iVar5 = FUN_140e851f0(puVar6,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar5 == 0) {
    local_d8 = 0x21;
    cVar3 = FUN_140e491e0(&local_c8);
    if (cVar3 == '\0') {
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      local_158 = (undefined1 *)CONCAT44(uRam0000000141dc6474,_DAT_141dc6470);
      uStack_150 = uRam0000000141dc6478;
      uStack_14c = uRam0000000141dc647c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_158);
      uVar11 = _DAT_1419e4130;
      uVar12 = uRam00000001419e4134;
      uStack_150 = uRam00000001419e4138;
      uStack_14c = uRam00000001419e413c;
LAB_14033a523:
      local_98 = local_128;
      local_158 = (undefined1 *)CONCAT44(uVar12,uVar11);
      if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_118);
      }
      FUN_140041b80(&local_118,&local_158);
      local_90 = &local_118;
      uVar9 = FUN_140e634e0(param_1,param_2,&local_148,2,CONCAT44(uVar16,DAT_1419fe558),&local_98);
      cVar4 = FUN_140e491e0(uVar9);
    }
    else {
      cVar4 = '\x01';
    }
  }
  else {
    local_d8 = 0x23;
    if (param_4 < 1) {
      puVar6 = &DAT_1419df7b0;
    }
    else {
      puVar6 = (undefined8 *)*param_5;
    }
    uStack_14c = 0;
    local_158 = (undefined1 *)0x0;
    iVar5 = FUN_140e851f0(puVar6,&local_158,DAT_141955260,0);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (iVar5 != 0) {
      local_d8 = 0x28;
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      local_158 = (undefined1 *)CONCAT44(uRam0000000141dd086c,_DAT_141dd0868);
      uStack_150 = uRam0000000141dd0870;
      uStack_14c = DAT_141dd0874;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_158);
      local_98 = local_128;
      if ((param_4 < 1) || (plVar10 = (longlong *)*param_5, plVar10 != &local_118)) {
        local_158 = (undefined1 *)*plVar10;
        uStack_150 = (undefined4)plVar10[1];
        uStack_14c = *(undefined4 *)((longlong)plVar10 + 0xc);
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_118);
        }
        FUN_140041b80(&local_118,&local_158);
      }
      local_90 = &local_118;
      local_158 = (undefined1 *)CONCAT44(uRam0000000141dd087c,_DAT_141dd0878);
      uStack_150 = uRam0000000141dd0880;
      uStack_14c = DAT_141dd0884;
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_108);
      }
      FUN_140041b80(local_108,&local_158);
      local_88 = local_108;
      FUN_14008e020(param_1,param_2,&local_148,3,&local_98);
      local_d8 = 0x2a;
      *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
      *param_3 = (undefined1 *)0x0;
      goto LAB_14033a6f9;
    }
    local_d8 = 0x25;
    cVar4 = '\0';
    cVar3 = FUN_140e491e0(&local_c8);
    if (cVar3 == '\0') {
      if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_148);
      }
      local_148 = 0;
      local_140 = 0;
      local_13c = 5;
      local_158 = (undefined1 *)CONCAT44(uRam0000000141dc6474,_DAT_141dc6470);
      uStack_150 = uRam0000000141dc6478;
      uStack_14c = uRam0000000141dc647c;
      if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(local_128);
      }
      FUN_140041b80(local_128,&local_158);
      uVar11 = _DAT_141dc6470;
      uVar12 = uRam0000000141dc6474;
      uStack_150 = uRam0000000141dc6478;
      uStack_14c = uRam0000000141dc647c;
      goto LAB_14033a523;
    }
  }
  if ((1 << ((byte)*(undefined4 *)((longlong)param_3 + 0xc) & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(param_3);
  }
  *(undefined4 *)((longlong)param_3 + 0xc) = 0xd;
  if (cVar4 == '\0') {
    uVar13 = 0;
  }
  *param_3 = (undefined1 *)((ulonglong)uVar13 << 0x20);
LAB_14033a6f9:
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

