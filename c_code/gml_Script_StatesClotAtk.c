// gml_Script_StatesClotAtk @ 0x14051adc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesClotAtk
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  bool bVar8;
  undefined8 **ppuVar9;
  undefined4 uVar10;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  char *local_120;
  undefined4 local_118;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined1 local_e8 [12];
  byte local_dc;
  undefined1 local_d8 [12];
  byte local_cc;
  undefined8 local_c8;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  
  local_120 = "gml_Script_StatesClotIdle";
  local_128 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_128;
  local_118 = 0x65;
  _eh_vector_constructor_iterator_(&local_108,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_5c = 0xffffff;
  local_68 = 0;
  local_14c = 0;
  local_158 = 0;
  local_9c = 0;
  local_a8 = 0;
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_118 = 0x67;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_4c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_50 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) == 0) {
    local_58 = *param_5;
  }
  else {
    FUN_1400419b0(&local_58);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf530) &&
     (_Init_thread_header(&DAT_141ddf530), DAT_141ddf530 == -1)) {
    _DAT_141ddf54c = 0;
    _DAT_141ddf540 = 0x4000000000000000;
    _DAT_141ddf560 = 0;
    _DAT_141ddf554 = 0;
    _DAT_141ddf564 = 1;
    _DAT_141ddf574 = 0;
    _DAT_141ddf568 = 0x3ff0000000000000;
    _DAT_141ddf578 = 2;
    _DAT_141ddf588 = 0;
    _DAT_141ddf57c = 0x4008000000000000;
    _DAT_141ddf58c = 3;
    atexit((_func_5014 *)&LAB_141481700);
    _Init_thread_footer(&DAT_141ddf530);
  }
  uVar7 = 0;
  do {
    iVar3 = FUN_140e851f0(&DAT_141ddf540 + (longlong)(int)uVar7 * 0x14,&local_58,DAT_141955260,0);
    if (iVar3 == 0) {
      iVar3 = *(int *)(&DAT_141ddf550 + (longlong)(int)uVar7 * 0x14);
      if (iVar3 == 0) {
        local_118 = 0x6d;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd448);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a748);
        FUN_140e609c0(param_1);
        uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_140 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
          local_148 = *puVar5;
        }
        else {
          FUN_1400419b0(&local_148,puVar5);
        }
        uStack_15c = 0;
        local_168 = 0x3ff8000000000000;
        FUN_140042560(&local_148,&local_168);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        if (&local_148 != puVar6) {
          local_168 = local_148;
          uStack_160 = uStack_140;
          uStack_15c = uStack_13c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_168);
        }
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140e60910(1);
        local_118 = 0x6e;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fd518);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a858);
        FUN_140e609c0(param_1);
        uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_140 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
          local_148 = *puVar5;
        }
        else {
          FUN_1400419b0(&local_148,puVar5);
        }
        uStack_15c = 0;
        local_168 = 0x3fe0000000000000;
        FUN_140042560(&local_148,&local_168);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        if (&local_148 != puVar6) {
          local_168 = local_148;
          uStack_160 = uStack_140;
          uStack_15c = uStack_13c;
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_168);
        }
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        FUN_140e60910(1);
        local_118 = 0x70;
      }
      else if (iVar3 == 1) {
        local_118 = 0x74;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
        puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if (puVar5 != &local_108) {
          local_168 = *puVar5;
          uStack_160 = *(undefined4 *)(puVar5 + 1);
          uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_108);
          }
          FUN_140041b80(&local_108,&local_168);
        }
        local_98 = &local_108;
        local_168 = CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
        uStack_160 = uRam0000000141dc66c8;
        uStack_15c = uRam0000000141dc66cc;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_168);
        local_90 = local_f8;
        local_168 = CONCAT44(uRam00000001419e6044,_DAT_1419e6040);
        uStack_160 = uRam00000001419e6048;
        uStack_15c = uRam00000001419e604c;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_168);
        local_88 = local_e8;
        FUN_140e609c0(param_1);
        ppuVar9 = &local_98;
        puVar5 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_158,3,&local_98);
        uVar10 = (undefined4)((ulonglong)ppuVar9 >> 0x20);
        if (puVar5 != puVar6) {
          local_168 = *puVar5;
          uStack_160 = *(undefined4 *)(puVar5 + 1);
          uStack_15c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar6);
          }
          FUN_140041b80(puVar6,&local_168);
        }
        FUN_140e60910(1);
        local_118 = 0x75;
        uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        FUN_140162c50(uVar4,0x3fc999999999999a);
        local_118 = 0x77;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f090);
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5a58);
        local_168 = CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
        uStack_160 = uRam0000000141dc66c8;
        uStack_15c = uRam0000000141dc66cc;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_168);
        local_98 = &local_108;
        uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_130 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
          local_138 = *puVar5;
        }
        else {
          FUN_1400419b0(&local_138,puVar5);
        }
        FUN_140046500(&local_138,uVar4);
        uStack_bc = 0;
        local_c8 = 0x3ff0000000000000;
        FUN_1400462a0(&local_c8,&local_138);
        uVar4 = CONCAT44(uVar10,DAT_141a0a0d8);
        puVar5 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_158,1,uVar4,&local_98);
        uVar10 = (undefined4)((ulonglong)uVar4 >> 0x20);
        uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_140 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
          local_148 = *puVar5;
        }
        else {
          FUN_1400419b0(&local_148,puVar5);
        }
        uStack_15c = 0;
        local_168 = 0x3ffd99999999999a;
        FUN_140042560(&local_148,&local_168);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        uStack_6c = uStack_13c;
        uStack_70 = uStack_140;
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
          local_78 = local_148;
        }
        else {
          FUN_1400419b0(&local_78,&local_148);
        }
        FUN_140042560(&local_78,&local_c8);
        local_168 = local_78;
        uStack_160 = uStack_70;
        uStack_15c = uStack_6c;
        if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_68);
        }
        FUN_140041b80(&local_68,&local_168);
        if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_78);
        }
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        if ((1 << ((byte)uStack_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        local_118 = 0x78;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
        local_168 = CONCAT44(uRam0000000141dc66c4,_DAT_141dc66c0);
        uStack_160 = uRam0000000141dc66c8;
        uStack_15c = uRam0000000141dc66cc;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_168);
        local_98 = &local_108;
        puVar5 = (undefined8 *)
                 FUN_140e634e0(param_1,param_2,&local_158,1,CONCAT44(uVar10,DAT_141a0a0d8),&local_98
                              );
        uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
        uStack_140 = *(undefined4 *)(puVar5 + 1);
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
          local_148 = *puVar5;
        }
        else {
          FUN_1400419b0(&local_148,puVar5);
        }
        uStack_15c = 7;
        local_168 = CONCAT44(local_168._4_4_,2);
        FUN_140042560(&local_148,&local_168);
        if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_168);
        }
        uStack_12c = uStack_13c;
        uStack_130 = uStack_140;
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) == 0) {
          local_138 = local_148;
        }
        else {
          FUN_1400419b0(&local_138,&local_148);
        }
        FUN_1400462a0(&local_138,&local_68);
        uVar7 = FUN_140e851f0(uVar4,&local_138,DAT_141955260,1);
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_148);
        }
        if (uVar7 < 0x80000000) {
          local_118 = 0x7a;
          if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_a8);
          }
          local_a8 = 0;
          local_a0 = 0;
          local_9c = 5;
          if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_b8);
          }
          local_b8 = 0;
          local_b0 = 0;
          local_ac = 5;
          local_168 = CONCAT44(uRam00000001419e60c4,_DAT_1419e60c0);
          uStack_160 = uRam00000001419e60c8;
          uStack_15c = uRam00000001419e60cc;
          if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_f8);
          }
          FUN_140041b80(local_f8,&local_168);
          local_90 = local_f8;
          uVar4 = gml_Script_choose_weighted(param_1,param_2,&local_b8,1,&local_90);
          cVar2 = FUN_140e491e0(uVar4);
          bVar8 = cVar2 == '\0';
          if (bVar8) {
            uStack_15c = 10;
            local_168 = 3;
            puVar5 = &local_168;
          }
          else {
            uStack_bc = 10;
            local_c8 = 9;
            puVar5 = &local_c8;
          }
          uVar1 = uStack_bc;
          uVar10 = uStack_15c;
          local_138 = *puVar5;
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_e8);
          }
          FUN_140041b80(local_e8,&local_138);
          if ((bVar8) && ((1 << ((byte)uVar10 & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_168);
          }
          if ((!bVar8) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
            FUN_140041a50(&local_c8);
          }
          local_88 = local_e8;
          local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_160 = DAT_1419df7b8;
          uStack_15c = DAT_1419df7bc;
          if ((1 << (local_cc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_d8);
          }
          FUN_140041b80(local_d8,&local_168);
          local_80 = local_d8;
          gml_Script_truestate_begin_step(param_1,param_2,&local_a8,2,&local_88);
        }
        local_118 = 0x7e;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd398);
        FUN_140e63610(param_1,param_2,&local_158,0,uVar4,0);
        local_118 = 0x7f;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
        FUN_140e63610(param_1,param_2,&local_158,0,uVar4,0);
        local_118 = 0x80;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd418);
        FUN_140e63610(param_1,param_2,&local_158,0,uVar4,0);
        local_118 = 0x81;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd588);
        local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_160 = DAT_1419df7b8;
        uStack_15c = DAT_1419df7bc;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_168);
        local_98 = &local_108;
        local_168 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_160 = DAT_1419df7b8;
        uStack_15c = DAT_1419df7bc;
        if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_f8);
        }
        FUN_140041b80(local_f8,&local_168);
        local_90 = local_f8;
        local_168 = CONCAT44(uRam00000001419e60b4,_DAT_1419e60b0);
        uStack_160 = uRam00000001419e60b8;
        uStack_15c = uRam00000001419e60bc;
        if ((1 << (local_dc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_e8);
        }
        FUN_140041b80(local_e8,&local_168);
        local_88 = local_e8;
        FUN_140e63610(param_1,param_2,&local_158,3,uVar4,&local_98);
        local_118 = 0x83;
      }
      else if (iVar3 == 2) {
        local_118 = 0x87;
        if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_158);
        }
        local_158 = 0;
        local_150 = 0;
        local_14c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_158,0,uVar4,0);
        local_118 = 0x88;
      }
      else if (iVar3 == 3) {
        local_118 = 0x8c;
      }
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  _eh_vector_destructor_iterator_(&local_108,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_128;
  return param_3;
}

