// gml_Object_oBuffProjectile_Step_0 @ 0x140866650

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Object_oBuffProjectile_Step_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined4 uVar8;
  ulonglong in_stack_fffffffffffffea0;
  undefined1 **ppuVar9;
  ulonglong uVar10;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128 [12];
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  local_f0 = "gml_Object_oBrickParticle_Step_0";
  local_e8 = 0;
  local_f8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_f8;
  pcVar6 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_128,0x10,3,FUN_1400424d0,FUN_140041b30);
  local_7c = 0xffffff;
  local_88 = 0;
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  uStack_3c = 0xffffff;
  local_48 = 0;
  uStack_4c = 0xffffff;
  local_58 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  uStack_5c = 0xffffff;
  local_68 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  uStack_6c = 0xffffff;
  local_78 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_13c = 0xffffff;
  local_148 = 0;
  local_e8 = 3;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0a848);
  uVar5 = (**(code **)(*param_1 + 8))(param_1,DAT_141a0a868);
  uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_130 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_138,puVar4);
  }
  FUN_140046880(&local_138,uVar5);
  uStack_14c = 0;
  local_158 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(&local_138,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 == 0) {
    local_e8 = 4;
    uStack_14c = 6;
    in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
    pcVar6 = (code *)((ulonglong)pcVar6 & 0xffffffffffffff00);
    local_158 = param_1;
    FUN_140e87440(&local_158,DAT_141a0a778,0x80000000,&local_88,pcVar6,in_stack_fffffffffffffea0);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    FUN_140162d40(&local_88,0x5a);
    FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_88);
  }
  local_e8 = 6;
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a848);
  FUN_140046040(uVar5);
  local_e8 = 8;
  puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f310);
  uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
  uStack_12c = *(undefined4 *)((longlong)puVar4 + 0xc);
  uStack_130 = *(undefined4 *)(puVar4 + 1);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
    local_138 = *puVar4;
  }
  else {
    FUN_1400419b0(&local_138,puVar4);
  }
  FUN_140042560(&local_138,uVar3);
  FUN_1400460e0(uVar5,&local_138);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  local_e8 = 10;
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  local_148 = 0;
  local_140 = 0;
  local_13c = 5;
  uStack_14c = 6;
  in_stack_fffffffffffffea0 = in_stack_fffffffffffffea0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)pcVar6 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_48,uVar7,in_stack_fffffffffffffea0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  uStack_14c = 6;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_58,uVar7,
                in_stack_fffffffffffffea0 & 0xffffffffffffff00);
  uVar8 = (undefined4)(uVar7 >> 0x20);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  local_158 = (longlong *)local_48;
  uStack_150 = uStack_40;
  uStack_14c = uStack_3c;
  if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_128);
  }
  FUN_140041b80(local_128,&local_158);
  local_c0 = local_128;
  local_158 = (longlong *)local_58;
  uStack_150 = uStack_50;
  uStack_14c = uStack_4c;
  if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_118);
  }
  FUN_140041b80(local_118,&local_158);
  local_b8 = local_118;
  uStack_14c = 0xf;
  local_158 = (longlong *)0x100000000000149;
  local_138 = 0x100000000000149;
  uStack_130 = uStack_150;
  uStack_12c = 0xf;
  if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  FUN_140041b80(&local_108,&local_138);
  local_b0 = &local_108;
  ppuVar9 = &local_c0;
  uVar7 = CONCAT44(uVar8,DAT_141a12628);
  uVar3 = FUN_140e634e0(param_1,param_2,&local_148,3,uVar7,ppuVar9);
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 != '\0') {
    uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
    uStack_14c = 0;
    local_158 = (longlong *)0x0;
    iVar2 = FUN_140e851f0(uVar3,&local_158,DAT_141955260,1);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    if (0 < iVar2) {
      local_e8 = 0xc;
      FUN_140edd0e0(param_1,param_2,0,0);
    }
  }
  local_e8 = 0x10;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
  uStack_14c = 6;
  uVar10 = (ulonglong)ppuVar9 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe0e8,0x80000000,&local_98,uVar7,uVar10);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_1400460e0(&local_98,uVar3);
  FUN_140e86fa0(param_1,DAT_1419fe0e8,0x80000000,&local_98);
  local_e8 = 0x11;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a1f500);
  uStack_14c = 6;
  uVar10 = uVar10 & 0xffffffffffffff00;
  uVar7 = uVar7 & 0xffffffffffffff00;
  local_158 = param_1;
  FUN_140e87440(&local_158,DAT_1419fe158,0x80000000,&local_a8,uVar7,uVar10);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  FUN_1400460e0(&local_a8,uVar3);
  FUN_140e86fa0(param_1,DAT_1419fe158,0x80000000,&local_a8);
  local_e8 = 0x13;
  uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdad8);
  uStack_14c = 0;
  local_158 = (longlong *)0x0;
  iVar2 = FUN_140e851f0(uVar3,&local_158,DAT_141955260,0);
  if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_158);
  }
  if (iVar2 != 0) {
    local_e8 = 0x15;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdad8);
    uStack_14c = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_158 = param_1;
    FUN_140e87440(&local_158,DAT_141a0f7f8,0x80000000,&local_68,uVar7,uVar10 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = (longlong *)local_68;
    uStack_150 = uStack_60;
    uStack_14c = uStack_5c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_158);
    local_c0 = local_128;
    local_158 = (longlong *)CONCAT44(uRam0000000141dc6ad4,_DAT_141dc6ad0);
    uStack_150 = uRam0000000141dc6ad8;
    uStack_14c = uRam0000000141dc6adc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_158);
    local_b8 = local_118;
    if (puVar4 != &local_108) {
      local_158 = (longlong *)*puVar4;
      uStack_150 = *(undefined4 *)(puVar4 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_158);
    }
    local_b0 = &local_108;
    ppuVar9 = &local_c0;
    uVar7 = CONCAT44(uVar8,DAT_141a00c58);
    puVar4 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_148,3,uVar7,ppuVar9);
    if (puVar4 != &local_d0) {
      local_158 = (longlong *)*puVar4;
      uStack_150 = *(undefined4 *)(puVar4 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_d0);
      }
      FUN_140041b80(&local_d0,&local_158);
    }
    FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_d0);
    local_e8 = 0x16;
    if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = 0;
    local_140 = 0;
    local_13c = 5;
    puVar4 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_1419fdad8);
    uStack_14c = 6;
    uVar7 = uVar7 & 0xffffffffffffff00;
    local_158 = param_1;
    FUN_140e87440(&local_158,DAT_141a0f938,0x80000000,&local_78,uVar7,
                  (ulonglong)ppuVar9 & 0xffffffffffffff00);
    uVar8 = (undefined4)(uVar7 >> 0x20);
    if ((1 << ((byte)uStack_14c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_158);
    }
    local_158 = (longlong *)local_78;
    uStack_150 = uStack_70;
    uStack_14c = uStack_6c;
    if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_128);
    }
    FUN_140041b80(local_128,&local_158);
    local_c0 = local_128;
    local_158 = (longlong *)CONCAT44(uRam0000000141dc6ad4,_DAT_141dc6ad0);
    uStack_150 = uRam0000000141dc6ad8;
    uStack_14c = uRam0000000141dc6adc;
    if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_118);
    }
    FUN_140041b80(local_118,&local_158);
    local_b8 = local_118;
    if (puVar4 != &local_108) {
      local_158 = (longlong *)*puVar4;
      uStack_150 = *(undefined4 *)(puVar4 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      FUN_140041b80(&local_108,&local_158);
    }
    local_b0 = &local_108;
    puVar4 = (undefined8 *)
             FUN_140e634e0(param_1,param_2,&local_148,3,CONCAT44(uVar8,DAT_141a00c58),&local_c0);
    if (puVar4 != &local_e0) {
      local_158 = (longlong *)*puVar4;
      uStack_150 = *(undefined4 *)(puVar4 + 1);
      uStack_14c = *(undefined4 *)((longlong)puVar4 + 0xc);
      if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_e0);
      }
      FUN_140041b80(&local_e0,&local_158);
    }
    FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_e0);
  }
  if ((1 << ((byte)local_13c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_148);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)uStack_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)uStack_4c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_58);
  }
  if ((1 << ((byte)uStack_3c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_48);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  _eh_vector_destructor_iterator_(local_128,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_f8;
  return;
}

