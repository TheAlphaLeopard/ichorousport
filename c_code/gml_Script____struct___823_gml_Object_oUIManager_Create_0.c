// gml_Script____struct___823_gml_Object_oUIManager_Create_0 @ 0x140e013e0

undefined8 *
gml_Script____struct___823_gml_Object_oUIManager_Create_0
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 **ppuVar6;
  ulonglong uVar7;
  ulonglong in_stack_fffffffffffffec0;
  undefined8 local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_110;
  undefined4 local_10c;
  undefined8 local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined4 local_ec;
  undefined8 local_e8;
  char *local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  undefined4 local_8c;
  undefined8 local_88;
  undefined4 local_7c;
  undefined1 local_78 [12];
  byte local_6c;
  undefined1 local_68 [12];
  byte local_5c;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_e0 = "gml_Script_anon@3804@___struct___823@gml_Object_oUIManager_Create_0";
  local_e8 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_e8;
  local_d8 = 0xe0;
  _eh_vector_constructor_iterator_(local_78,0x10,2,FUN_1400424d0,FUN_140041b30);
  local_11c = 0xffffff;
  local_128 = 0;
  local_c4 = 0xffffff;
  local_d0 = 0;
  local_ec = 0xffffff;
  local_f8 = 0;
  local_fc = 0xffffff;
  local_108 = 0;
  local_8c = 0xffffff;
  local_98 = 0;
  local_9c = 0xffffff;
  local_a8 = 0;
  local_7c = 0xffffff;
  local_88 = 0;
  local_10c = 0;
  local_118 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_d8 = 0xe2;
  local_138 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_130 = DAT_1419df7b8;
  uStack_12c = DAT_1419df7bc;
  if ((1 << (local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_78);
  }
  FUN_140041b80(local_78,&local_138);
  local_58 = local_78;
  local_138 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
  uStack_130 = DAT_1419df7b8;
  uStack_12c = DAT_1419df7bc;
  if ((1 << (local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(local_68);
  }
  FUN_140041b80(local_68,&local_138);
  ppuVar6 = &local_58;
  local_50 = local_68;
  uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_118,2,ppuVar6);
  cVar1 = FUN_140e491e0(uVar4);
  if (cVar1 != '\0') {
    local_d8 = 0xe4;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_128 = 0;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
    local_d8 = 0xe6;
    uStack_12c = 6;
    in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
    ppuVar6 = (undefined1 **)((ulonglong)ppuVar6 & 0xffffffffffffff00);
    local_138 = param_1;
    FUN_140e87440(&local_138,DAT_141a0a728,0x80000000,&local_d0,ppuVar6,in_stack_fffffffffffffec0);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uStack_12c = 0xf;
    local_138 = (longlong *)0x1000001000000f2;
    iVar2 = FUN_140e851f0(&local_d0,&local_138,DAT_141955260,0);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (iVar2 == 0) {
      local_d8 = 0xe8;
      uStack_12c = 0xf;
      local_138 = (longlong *)0x1000001000000f3;
      local_b8 = 0xf3;
      uStack_b4 = 0x1000001;
      uStack_b0 = uStack_130;
      uStack_ac = 0xf;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_b8);
      puVar5 = &local_f8;
      uVar3 = DAT_141a0a728;
    }
    else {
      local_d8 = 0xea;
      uStack_12c = 6;
      in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
      ppuVar6 = (undefined1 **)((ulonglong)ppuVar6 & 0xffffffffffffff00);
      local_138 = param_1;
      FUN_140e87440(&local_138,DAT_141a0a728,0x80000000,&local_d0,ppuVar6,in_stack_fffffffffffffec0)
      ;
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      uStack_12c = 0xf;
      local_138 = (longlong *)0x1000001000000f3;
      iVar2 = FUN_140e851f0(&local_d0,&local_138,DAT_141955260,0);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (iVar2 == 0) {
        local_d8 = 0xec;
        uStack_12c = 0xf;
        local_138 = (longlong *)0x1000001000000f3;
        local_b8 = 0xf3;
        uStack_b4 = 0x1000001;
        uStack_b0 = uStack_130;
        uStack_ac = 0xf;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_b8);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_f8);
        local_d8 = 0xed;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_11c = 0;
        local_128 = 0x4000000000000000;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
        local_d8 = 0xee;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_fc = 0;
        local_108 = 0x3ff0000000000000;
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_108);
        goto LAB_140e01acc;
      }
      local_d8 = 0xf0;
      uStack_12c = 6;
      in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
      ppuVar6 = (undefined1 **)((ulonglong)ppuVar6 & 0xffffffffffffff00);
      local_138 = param_1;
      FUN_140e87440(&local_138,DAT_141a0a728,0x80000000,&local_d0,ppuVar6,in_stack_fffffffffffffec0)
      ;
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      uStack_12c = 0xf;
      local_138 = (longlong *)0x1000001000000f1;
      iVar2 = FUN_140e851f0(&local_d0,&local_138,DAT_141955260,0);
      if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_138);
      }
      if (iVar2 == 0) {
        local_d8 = 0xf2;
        uStack_12c = 0xf;
        local_138 = (longlong *)0x1000001000000f2;
        local_b8 = 0xf2;
        uStack_b4 = 0x1000001;
        uStack_b0 = uStack_130;
        uStack_ac = 0xf;
        if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_f8);
        }
        FUN_140041b80(&local_f8,&local_b8);
        puVar5 = &local_f8;
        uVar3 = DAT_141a0a728;
      }
      else {
        local_d8 = 0xf4;
        uStack_12c = 6;
        in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
        ppuVar6 = (undefined1 **)((ulonglong)ppuVar6 & 0xffffffffffffff00);
        local_138 = param_1;
        FUN_140e87440(&local_138,DAT_141a0a728,0x80000000,&local_d0,ppuVar6,
                      in_stack_fffffffffffffec0);
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        uStack_12c = 0xf;
        local_138 = (longlong *)0x1000001000000f4;
        iVar2 = FUN_140e851f0(&local_d0,&local_138,DAT_141955260,0);
        if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_138);
        }
        if (iVar2 != 0) goto LAB_140e01acc;
        local_d8 = 0xf6;
        if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        local_11c = 0;
        local_128 = 0x4010000000000000;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
        local_d8 = 0xf7;
        if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        local_fc = 0;
        local_108 = 0;
        puVar5 = &local_108;
        uVar3 = DAT_141a0a818;
      }
    }
    FUN_140e86fa0(param_1,uVar3,0x80000000,puVar5);
  }
LAB_140e01acc:
  local_d8 = 0xfb;
  uStack_12c = 6;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  puVar5 = (undefined8 *)((ulonglong)ppuVar6 & 0xffffffffffffff00);
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_141a0a728,0x80000000,&local_d0,puVar5,in_stack_fffffffffffffec0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = 0xf;
  local_138 = (longlong *)0x1000001000000f1;
  iVar2 = FUN_140e851f0(&local_d0,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 == 0) {
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uStack_12c = 0xf;
    local_138 = (longlong *)0x1000000000000ee;
    FUN_140e87440(&local_138,DAT_1419f8c08,0x80000000,&local_98,
                  (ulonglong)puVar5 & 0xffffffffffffff00,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uStack_12c = 0xf;
    local_138 = (longlong *)0x1000000000000ee;
    uVar4 = FUN_140069500(&local_138);
    in_stack_fffffffffffffec0 = 0;
    puVar5 = &local_98;
    uVar4 = FUN_140e63610(uVar4,param_2,&local_118,0,puVar5,0);
    cVar1 = FUN_140e491e0(uVar4);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (cVar1 == '\0') {
      local_d8 = 0xfd;
      uStack_12c = 0xf;
      local_138 = (longlong *)0x1000001000000f2;
      local_b8 = 0xf2;
      uStack_b4 = 0x1000001;
      uStack_b0 = uStack_130;
      uStack_ac = 0xf;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_b8);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_f8);
      local_d8 = 0xfe;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_fc = 0;
      local_108 = 0x3ff0000000000000;
      FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_108);
      local_d8 = 0xff;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_11c = 0;
      local_128 = 0;
      FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
    }
  }
  local_d8 = 0x102;
  uStack_12c = 6;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  puVar5 = (undefined8 *)((ulonglong)puVar5 & 0xffffffffffffff00);
  local_138 = param_1;
  FUN_140e87440(&local_138,DAT_141a0a728,0x80000000,&local_d0,puVar5,in_stack_fffffffffffffec0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  uStack_12c = 0xf;
  local_138 = (longlong *)0x1000001000000f4;
  iVar2 = FUN_140e851f0(&local_d0,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 != 0) {
    if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_118);
    }
    local_118 = 0;
    local_110 = 0;
    local_10c = 5;
    uStack_12c = 0xf;
    local_138 = (longlong *)0x1000000000000ee;
    FUN_140e87440(&local_138,DAT_1419f8c08,0x80000000,&local_98,
                  (ulonglong)puVar5 & 0xffffffffffffff00,
                  in_stack_fffffffffffffec0 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    uStack_12c = 0xf;
    local_138 = (longlong *)0x1000000000000ee;
    uVar4 = FUN_140069500(&local_138);
    in_stack_fffffffffffffec0 = 0;
    puVar5 = &local_98;
    uVar4 = FUN_140e63610(uVar4,param_2,&local_118,0,puVar5,0);
    cVar1 = FUN_140e491e0(uVar4);
    if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_138);
    }
    if (cVar1 != '\0') {
      local_d8 = 0x104;
      uStack_12c = 0xf;
      local_138 = (longlong *)0x1000001000000f4;
      local_b8 = 0xf4;
      uStack_b4 = 0x1000001;
      uStack_b0 = uStack_130;
      uStack_ac = 0xf;
      if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_f8);
      }
      FUN_140041b80(&local_f8,&local_b8);
      FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_f8);
      local_d8 = 0x105;
      if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_108);
      }
      local_fc = 0;
      local_108 = 0x3ff0000000000000;
      FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_108);
      local_d8 = 0x106;
      if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
        FUN_140041a50(&local_128);
      }
      local_11c = 0;
      local_128 = 0;
      FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
    }
  }
  local_d8 = 0x109;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uStack_12c = 0xf;
  local_138 = (longlong *)0x1000000000000ee;
  in_stack_fffffffffffffec0 = in_stack_fffffffffffffec0 & 0xffffffffffffff00;
  uVar7 = (ulonglong)puVar5 & 0xffffffffffffff00;
  FUN_140e87440(&local_138,DAT_1419f5868,0x80000000,&local_a8,uVar7,in_stack_fffffffffffffec0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  FUN_140e87440(&local_a8,DAT_1419f5df8,0x80000000,&local_88,uVar7 & 0xffffffffffffff00,
                in_stack_fffffffffffffec0 & 0xffffffffffffff00);
  uStack_12c = DAT_141ddbda4;
  uStack_130 = DAT_141ddbda0;
  if ((1 << ((byte)DAT_141ddbda4 & 0x1f) & 0x46U) == 0) {
    local_138 = (longlong *)DAT_141ddbd98;
  }
  else {
    FUN_1400419b0(&local_138,&DAT_141ddbd98);
  }
  switch(local_9c) {
  default:
switchD_140e020bc_caseD_1:
    uVar4 = 0;
    break;
  case 6:
    uVar4 = local_a8;
    break;
  case 0xf:
    iVar2 = (int)((ulonglong)local_a8 >> 0x20);
    if ((iVar2 != 0x1000000) && (iVar2 != 0x4000001)) goto switchD_140e020bc_caseD_1;
  case 0:
  case 7:
  case 10:
  case 0xd:
    uVar3 = FUN_140e4a8b0(&local_a8);
    uVar4 = FUN_140e87250(uVar3);
  }
  uVar4 = FUN_140e63610(uVar4,param_2,&local_118,0,&local_88,0);
  iVar2 = FUN_140e851f0(uVar4,&local_138,DAT_141955260,0);
  if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_138);
  }
  if (iVar2 == 0) {
    local_d8 = 0x10b;
    uStack_12c = 0xf;
    local_138 = (longlong *)0x1000001000000f1;
    local_b8 = 0xf1;
    uStack_b4 = 0x1000001;
    uStack_b0 = uStack_130;
    uStack_ac = 0xf;
    if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_f8);
    }
    FUN_140041b80(&local_f8,&local_b8);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_f8);
    local_d8 = 0x10c;
    if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_128);
    }
    local_11c = 0;
    local_128 = 0;
    FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_128);
    local_d8 = 0x10d;
    if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_108);
    }
    local_fc = 0;
    local_108 = 0x3ff0000000000000;
    FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_108);
  }
  local_d8 = 0x110;
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  local_118 = 0;
  local_110 = 0;
  local_10c = 5;
  uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a03228);
  FUN_140e63610(param_1,param_2,&local_118,0,uVar4,0);
  if ((1 << ((byte)local_10c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_118);
  }
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  if ((1 << ((byte)local_fc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_108);
  }
  if ((1 << ((byte)local_ec & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f8);
  }
  if ((1 << ((byte)local_c4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d0);
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  _eh_vector_destructor_iterator_(local_78,0x10,2,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_e8;
  return param_3;
}

