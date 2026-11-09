// gml_Script_StatesTongueUnderground @ 0x1405a32f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesTongueUnderground
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  uint uVar7;
  code *pcVar8;
  ulonglong uVar9;
  undefined4 uVar10;
  ulonglong in_stack_fffffffffffffe70;
  longlong *local_188;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_178;
  undefined4 local_170;
  undefined4 local_16c;
  undefined8 local_168;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  char *local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_134;
  undefined8 local_130;
  undefined4 local_124;
  undefined8 local_120;
  undefined4 local_114;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  longlong *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  longlong *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined1 local_c8 [12];
  byte local_bc;
  undefined1 local_b8 [12];
  byte local_ac;
  undefined1 local_a8 [12];
  byte local_9c;
  undefined1 local_98 [12];
  byte local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_6c;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  
  local_150 = "gml_Script_StatesTongueCutOff";
  local_158 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_158;
  local_148 = 1;
  pcVar8 = FUN_140041b30;
  _eh_vector_constructor_iterator_(local_c8,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_114 = 0xffffff;
  local_120 = 0;
  local_124 = 0xffffff;
  local_130 = 0;
  local_134 = 0xffffff;
  local_140 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  local_6c = 0xffffff;
  local_78 = 0;
  local_e4 = 0xffffff;
  local_f0 = (longlong *)0x0;
  local_f4 = 0xffffff;
  local_100 = (longlong *)0x0;
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_16c = 0;
  local_178 = 0;
  local_104 = 0;
  local_110 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_148 = 3;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_7c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_80 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) == 0) {
    local_88 = *param_5;
  }
  else {
    FUN_1400419b0(&local_88);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de08c4) &&
     (_Init_thread_header(&DAT_141de08c4), DAT_141de08c4 == -1)) {
    _DAT_141de087c = 0;
    _DAT_141de0870 = 0x4000000000000000;
    _DAT_141de0890 = 0;
    _DAT_141de0884 = 0;
    _DAT_141de0894 = 1;
    _DAT_141de08a4 = 0;
    _DAT_141de0898 = 0x3ff0000000000000;
    _DAT_141de08a8 = 2;
    _DAT_141de08b8 = 0;
    _DAT_141de08ac = 0x4008000000000000;
    _DAT_141de08bc = 3;
    atexit((_func_5014 *)&LAB_141483080);
    _Init_thread_footer(&DAT_141de08c4);
  }
  uVar7 = 0;
  do {
    iVar2 = FUN_140e851f0(&DAT_141de0870 + (longlong)(int)uVar7 * 0x14,&local_88,DAT_141955260,0);
    if (iVar2 == 0) {
      iVar2 = *(int *)(&DAT_141de0880 + (longlong)(int)uVar7 * 0x14);
      if (iVar2 == 0) {
        local_148 = 7;
        uStack_15c = 0xf;
        local_168 = (longlong *)0x10000010000017a;
        local_188 = (longlong *)0x10000010000017a;
        uStack_180 = uStack_160;
        uStack_17c = 0xf;
        if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_120);
        }
        FUN_140041b80(&local_120,&local_188);
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_120);
        local_148 = 8;
        if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_130);
        }
        local_124 = 0;
        local_130 = 0;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_130);
        local_148 = 9;
        if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_140);
        }
        local_134 = 0;
        local_140 = 0x3ff0000000000000;
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_140);
        local_148 = 0xb;
        if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_e0);
        }
        local_d4 = 0;
        local_e0 = 0;
        FUN_140e86fa0(param_1,DAT_141a0a778,0x80000000,&local_e0);
        local_148 = 0xd;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *puVar3 = 0;
        local_148 = 0xf;
        puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar3);
        }
        *(undefined4 *)((longlong)puVar3 + 0xc) = 0;
        *puVar3 = 0xc014000000000000;
        local_148 = 0x11;
      }
      else if (iVar2 == 1) {
        local_148 = 0x15;
        uVar4 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f500);
        FUN_140162c50(uVar4,0x3fc999999999999a);
        local_148 = 0x17;
        uStack_17c = 6;
        in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
        uVar9 = (ulonglong)pcVar8 & 0xffffffffffffff00;
        local_188 = param_1;
        FUN_140e87440(&local_188,DAT_141a0a728,0x80000000,&local_78,uVar9,in_stack_fffffffffffffe70)
        ;
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        uStack_17c = 0xf;
        local_188 = (longlong *)0x10000010000017b;
        iVar2 = FUN_140e851f0(&local_78,&local_188,DAT_141955260,0);
        if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        if (iVar2 != 0) {
          local_148 = 0x19;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
          uVar5 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
          uStack_17c = 0;
          local_188 = (longlong *)0xc010000000000000;
          FUN_140042560(&local_188,uVar4);
          FUN_1400460e0(uVar5,&local_188);
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_148 = 0x1b;
          if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_178);
          }
          local_178 = 0;
          local_170 = 0;
          local_16c = 5;
          uStack_17c = 6;
          in_stack_fffffffffffffe70 = in_stack_fffffffffffffe70 & 0xffffffffffffff00;
          uVar9 = uVar9 & 0xffffffffffffff00;
          local_188 = param_1;
          FUN_140e87440(&local_188,DAT_1419fe0e8,0x80000000,&local_f0,uVar9,
                        in_stack_fffffffffffffe70);
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          uStack_17c = 6;
          uVar9 = uVar9 & 0xffffffffffffff00;
          local_188 = param_1;
          FUN_140e87440(&local_188,DAT_1419fe158,0x80000000,&local_100,uVar9,
                        in_stack_fffffffffffffe70 & 0xffffffffffffff00);
          uVar10 = (undefined4)(uVar9 >> 0x20);
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          uStack_17c = local_e4;
          uStack_180 = local_e8;
          if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
            local_188 = local_f0;
          }
          else {
            FUN_1400419b0(&local_188,&local_f0);
          }
          FUN_1400462a0(&local_188,uVar4);
          local_168 = local_188;
          uStack_160 = uStack_180;
          uStack_15c = uStack_17c;
          if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_c8);
          }
          FUN_140041b80(local_c8,&local_168);
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          local_68 = local_c8;
          uStack_17c = local_f4;
          uStack_180 = local_f8;
          if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) == 0) {
            local_188 = local_100;
          }
          else {
            FUN_1400419b0(&local_188,&local_100);
          }
          uStack_15c = 7;
          local_168 = (longlong *)CONCAT44(local_168._4_4_,1);
          FUN_1400460e0(&local_188,&local_168);
          if ((1 << ((byte)uStack_15c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_168);
          }
          local_168 = local_188;
          uStack_160 = uStack_180;
          uStack_15c = uStack_17c;
          if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_b8);
          }
          FUN_140041b80(local_b8,&local_168);
          if ((1 << ((byte)uStack_17c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_188);
          }
          uStack_15c = 0xf;
          local_168 = (longlong *)0x100000000000149;
          local_188 = (longlong *)0x100000000000149;
          uStack_180 = uStack_160;
          uStack_17c = 0xf;
          local_60 = local_b8;
          if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          FUN_140041b80(local_a8,&local_188);
          local_58 = local_a8;
          uVar4 = FUN_140e634e0(param_1,param_2,&local_178,3,CONCAT44(uVar10,DAT_141a12628),
                                &local_68);
          cVar1 = FUN_140e491e0(uVar4);
          if (cVar1 != '\0') {
            local_148 = 0x1d;
            (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
            uStack_15c = 0xf;
            local_168 = (longlong *)0x10000010000017b;
            local_188 = (longlong *)0x10000010000017b;
            uStack_180 = uStack_160;
            uStack_17c = 0xf;
            if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_120);
            }
            FUN_140041b80(&local_120,&local_188);
            FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_120);
            local_148 = 0x1e;
            if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_178);
            }
            local_178 = 0;
            local_170 = 0;
            local_16c = 5;
            uStack_15c = 0xf;
            local_168 = (longlong *)0x100000000000149;
            local_188 = (longlong *)0x100000000000149;
            uStack_180 = uStack_160;
            uStack_17c = 0xf;
            if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_c8);
            }
            FUN_140041b80(local_c8,&local_188);
            local_68 = local_c8;
            gml_GlobalScript_world_pos_to_gui(param_1,param_2,&local_178,1,&local_68);
            local_148 = 0x1f;
            if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_130);
            }
            local_124 = 0;
            local_130 = 0;
            FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_130);
            local_148 = 0x20;
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            *puVar6 = 0;
            local_148 = 0x21;
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0a7f8);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar6 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar6);
            }
            *(undefined4 *)((longlong)puVar6 + 0xc) = 0;
            *puVar6 = 0;
          }
        }
        local_148 = 0x26;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uStack_15c = 0xf;
        local_168 = (longlong *)0x10000010000017b;
        local_188 = (longlong *)0x10000010000017b;
        uStack_180 = uStack_160;
        uStack_17c = 0xf;
        if ((1 << (local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_c8);
        }
        FUN_140041b80(local_c8,&local_188);
        local_68 = local_c8;
        local_168 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_160 = DAT_1419df7b8;
        uStack_15c = DAT_1419df7bc;
        if ((1 << (local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_b8);
        }
        FUN_140041b80(local_b8,&local_168);
        local_60 = local_b8;
        uVar4 = gml_Script_animcurve_lerp(param_1,param_2,&local_178,2,&local_68);
        cVar1 = FUN_140e491e0(uVar4);
        if (cVar1 != '\0') {
          local_148 = 0x28;
          if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_110);
          }
          local_110 = 0;
          local_108 = 0;
          local_104 = 5;
          local_168 = (longlong *)CONCAT44(uRam00000001419e6854,_DAT_1419e6850);
          uStack_160 = uRam00000001419e6858;
          uStack_15c = uRam00000001419e685c;
          if ((1 << (local_9c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_a8);
          }
          FUN_140041b80(local_a8,&local_168);
          local_58 = local_a8;
          local_168 = (longlong *)CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
          uStack_160 = DAT_1419df7b8;
          uStack_15c = DAT_1419df7bc;
          if ((1 << (local_8c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(local_98);
          }
          FUN_140041b80(local_98,&local_168);
          local_50 = local_98;
          gml_Script_truestate_begin_step(param_1,param_2,&local_110,2,&local_58);
        }
        local_148 = 0x2c;
        if (puVar3 != &local_140) {
          local_168 = (longlong *)*puVar3;
          uStack_160 = *(undefined4 *)(puVar3 + 1);
          uStack_15c = *(undefined4 *)((longlong)puVar3 + 0xc);
          if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_140);
          }
          FUN_140041b80(&local_140,&local_168);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_140);
        local_148 = 0x2d;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
        FUN_140e63610(param_1,param_2,&local_178,0,uVar4,0);
        local_148 = 0x2f;
      }
      else if (iVar2 == 2) {
        local_148 = 0x33;
        if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_178);
        }
        local_178 = 0;
        local_170 = 0;
        local_16c = 5;
        uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_178,0,uVar4,0);
        local_148 = 0x34;
      }
      else if (iVar2 == 3) {
        local_148 = 0x38;
      }
      break;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  if ((1 << ((byte)local_7c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_88);
  }
  if ((1 << ((byte)local_104 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_110);
  }
  if ((1 << ((byte)local_16c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_178);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_124 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_130);
  }
  if ((1 << ((byte)local_114 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_120);
  }
  _eh_vector_destructor_iterator_(local_c8,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_158;
  return param_3;
}

