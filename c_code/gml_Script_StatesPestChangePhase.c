// gml_Script_StatesPestChangePhase @ 0x1405959c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
gml_Script_StatesPestChangePhase
          (longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,undefined8 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 **ppuVar9;
  longlong *plVar10;
  uint uVar11;
  bool bVar12;
  undefined8 local_188;
  undefined4 local_180;
  undefined4 local_17c;
  undefined8 local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined8 local_168;
  char *local_160;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 uStack_144;
  undefined8 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined8 local_128;
  byte local_11c;
  undefined1 local_118 [12];
  byte local_10c;
  undefined8 local_108;
  byte local_fc;
  undefined1 local_f8 [12];
  byte local_ec;
  undefined8 local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 *local_98;
  undefined1 *local_90;
  undefined8 *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  local_160 = "gml_Script_StatesPestChangeForm";
  local_168 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_168;
  local_158 = 0x494;
  _eh_vector_constructor_iterator_(&local_128,0x10,4,FUN_1400424d0,FUN_140041b30);
  local_bc = 0xffffff;
  local_c8 = 0;
  local_cc = 0xffffff;
  local_d8 = 0;
  puVar5 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_dc = 0xffffff;
  local_e8 = 0;
  local_17c = 0;
  local_188 = 0;
  local_134 = 0;
  local_140 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  local_158 = 0x496;
  if (param_4 < 1) {
    param_5 = &DAT_1419df7b0;
  }
  else {
    param_5 = (undefined8 *)*param_5;
  }
  local_9c = *(undefined4 *)((longlong)param_5 + 0xc);
  local_a0 = *(undefined4 *)(param_5 + 1);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) == 0) {
    local_a8 = *param_5;
  }
  else {
    FUN_1400419b0(&local_a8);
  }
  if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de05b4) &&
     (_Init_thread_header(&DAT_141de05b4), DAT_141de05b4 == -1)) {
    _DAT_141de04cc = 0;
    _DAT_141de04c0 = 0x4000000000000000;
    _DAT_141de04e0 = 0;
    _DAT_141de04d4 = 0;
    _DAT_141de04e4 = 1;
    _DAT_141de04f4 = 0;
    _DAT_141de04e8 = 0x3ff0000000000000;
    _DAT_141de04f8 = 2;
    _DAT_141de0508 = 0;
    _DAT_141de04fc = 0x4008000000000000;
    _DAT_141de050c = 3;
    atexit((_func_5014 *)&LAB_141482ad0);
    _Init_thread_footer(&DAT_141de05b4);
  }
  uVar11 = 0;
  do {
    iVar4 = FUN_140e851f0(&DAT_141de04c0 + (longlong)(int)uVar11 * 0x14,&local_a8,DAT_141955260,0);
    if (iVar4 == 0) {
      iVar4 = *(int *)(&DAT_141de04d0 + (longlong)(int)uVar11 * 0x14);
      if (iVar4 == 0) {
        local_158 = 0x49a;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdd98);
        local_b8 = uVar6;
        plVar10 = (longlong *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fdd98);
        cVar3 = FUN_140e491e0(uVar6);
        if ((1 << ((byte)*(undefined4 *)((longlong)plVar10 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(plVar10);
        }
        *(undefined4 *)((longlong)plVar10 + 0xc) = 0xd;
        if (cVar3 == '\0') {
          uVar11 = 0x3ff00000;
        }
        else {
          uVar11 = 0;
        }
        *plVar10 = (ulonglong)uVar11 << 0x20;
        local_158 = 0x49b;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5ef8);
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fe978);
        uStack_144 = 0;
        local_150 = 0x3ff0000000000000;
        iVar4 = FUN_140e851f0(uVar6,&local_150,DAT_141955260,0);
        bVar12 = iVar4 != 0;
        if ((1 << ((byte)uStack_144 & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_150);
        }
        if (bVar12) {
          uStack_144 = 0;
          local_150 = 0x4066800000000000;
          puVar7 = &local_150;
        }
        else {
          uStack_16c = 0;
          local_178 = 0;
          puVar7 = &local_178;
        }
        uVar2 = uStack_144;
        uVar1 = uStack_16c;
        FUN_140e609c0(param_1);
        if (puVar7 != puVar5) {
          local_78 = *(undefined4 *)puVar7;
          uStack_74 = *(undefined4 *)((longlong)puVar7 + 4);
          uStack_70 = *(undefined4 *)(puVar7 + 1);
          uStack_6c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          FUN_140041b80(puVar5,&local_78);
        }
        if ((bVar12) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_150);
        }
        if ((!bVar12) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_178);
        }
        FUN_140e60910(1);
        local_158 = 0x49d;
        cVar3 = FUN_140e491e0(local_b8);
        bVar12 = cVar3 == '\0';
        if (bVar12) {
          uStack_16c = 0xf;
          local_178 = 0x10000010000034f;
          puVar5 = &local_178;
        }
        else {
          uStack_144 = 0xf;
          local_150 = 0x10000010000036d;
          puVar5 = &local_150;
        }
        uVar2 = uStack_144;
        uVar1 = uStack_16c;
        local_78 = *(undefined4 *)puVar5;
        uStack_74 = *(undefined4 *)((longlong)puVar5 + 4);
        uStack_70 = *(undefined4 *)(puVar5 + 1);
        uStack_6c = *(undefined4 *)((longlong)puVar5 + 0xc);
        if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_c8);
        }
        FUN_140041b80(&local_c8,&local_78);
        if ((bVar12) && ((1 << ((byte)uVar1 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_178);
        }
        if ((!bVar12) && ((1 << ((byte)uVar2 & 0x1f) & 0x46U) != 0)) {
          FUN_140041a50(&local_150);
        }
        FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_c8);
        local_158 = 0x49e;
        if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_d8);
        }
        local_cc = 0;
        local_d8 = 0;
        FUN_140e86fa0(param_1,DAT_141a0cfc8,0x80000000,&local_d8);
        local_158 = 0x4a0;
      }
      else if (iVar4 == 1) {
        local_158 = 0x4a4;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        puVar7 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a1f230);
        puVar8 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a1f230);
        if (puVar7 != &local_128) {
          local_178 = *puVar7;
          uStack_170 = *(undefined4 *)(puVar7 + 1);
          uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          FUN_140041b80(&local_128,&local_178);
        }
        local_98 = &local_128;
        local_178 = CONCAT44(uRam0000000141dc6704,_DAT_141dc6700);
        uStack_170 = uRam0000000141dc6708;
        uStack_16c = uRam0000000141dc670c;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_178);
        local_90 = local_118;
        local_178 = CONCAT44(uRam00000001419e6534,_DAT_1419e6530);
        uStack_170 = uRam00000001419e6538;
        uStack_16c = uRam00000001419e653c;
        if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_108);
        }
        FUN_140041b80(&local_108,&local_178);
        local_88 = &local_108;
        FUN_140e609c0(param_1);
        puVar7 = (undefined8 *)gml_Script_arc(param_1,param_2,&local_188,3,&local_98);
        if (puVar7 != puVar8) {
          local_178 = *puVar7;
          uStack_170 = *(undefined4 *)(puVar7 + 1);
          uStack_16c = *(undefined4 *)((longlong)puVar7 + 0xc);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar8 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar8);
          }
          FUN_140041b80(puVar8,&local_178);
        }
        FUN_140e60910(1);
        local_158 = 0x4a6;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_170 = DAT_1419df7b8;
        uStack_16c = DAT_1419df7bc;
        if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_128);
        }
        FUN_140041b80(&local_128,&local_178);
        local_98 = &local_128;
        local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
        uStack_170 = DAT_1419df7b8;
        uStack_16c = DAT_1419df7bc;
        if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(local_118);
        }
        FUN_140041b80(local_118,&local_178);
        local_90 = local_118;
        uVar6 = gml_Script_animcurve_lerp(param_1,param_2,&local_188,2,&local_98);
        cVar3 = FUN_140e491e0(uVar6);
        if (cVar3 != '\0') {
          local_158 = 0x4a8;
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdd98);
          cVar3 = FUN_140e491e0(uVar6);
          if (cVar3 == '\0') {
            local_158 = 0x4a9;
            if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_140);
            }
            local_140 = 0;
            local_138 = 0;
            local_134 = 5;
            local_178 = CONCAT44(uRam00000001419e6554,_DAT_1419e6550);
            uStack_170 = uRam00000001419e6558;
            uStack_16c = uRam00000001419e655c;
            if ((1 << (local_fc & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_108);
            }
            FUN_140041b80(&local_108,&local_178);
            local_88 = &local_108;
            local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_170 = DAT_1419df7b8;
            uStack_16c = DAT_1419df7bc;
            if ((1 << (local_ec & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_f8);
            }
            FUN_140041b80(local_f8,&local_178);
            local_80 = local_f8;
            ppuVar9 = &local_88;
            puVar7 = &local_140;
          }
          else {
            local_158 = 0x4ab;
            if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_188);
            }
            local_188 = 0;
            local_180 = 0;
            local_17c = 5;
            local_178 = CONCAT44(uRam00000001419e65d4,_DAT_1419e65d0);
            uStack_170 = uRam00000001419e65d8;
            uStack_16c = uRam00000001419e65dc;
            if ((1 << (local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            FUN_140041b80(&local_128,&local_178);
            local_98 = &local_128;
            local_178 = CONCAT44(DAT_1419df7b0._4_4_,(undefined4)DAT_1419df7b0);
            uStack_170 = DAT_1419df7b8;
            uStack_16c = DAT_1419df7bc;
            if ((1 << (local_10c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(local_118);
            }
            FUN_140041b80(local_118,&local_178);
            local_90 = local_118;
            ppuVar9 = &local_98;
            puVar7 = &local_188;
          }
          gml_Script_truestate_begin_step(param_1,param_2,puVar7,2,ppuVar9);
        }
        local_158 = 0x4ae;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd3b8);
        local_ac = 0;
        local_b8 = 0x4000000000000000;
        uVar11 = FUN_140e851f0(uVar6,&local_b8,DAT_141955260,1);
        if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_b8);
        }
        if (uVar11 < 0x80000000) {
          uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fdd98);
          cVar3 = FUN_140e491e0(uVar6);
          if (cVar3 != '\0') {
            local_158 = 0x4b1;
            puVar7 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419fd3b8);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar7);
            }
            *(undefined4 *)((longlong)puVar7 + 0xc) = 0;
            *puVar7 = 0;
          }
        }
        local_158 = 0x4b4;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419fd4b8);
        FUN_140e63610(param_1,param_2,&local_188,0,uVar6,0);
        local_158 = 0x4b5;
        if (puVar5 != &local_e8) {
          local_178 = *puVar5;
          uStack_170 = *(undefined4 *)(puVar5 + 1);
          uStack_16c = *(undefined4 *)((longlong)puVar5 + 0xc);
          if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e8);
          }
          FUN_140041b80(&local_e8,&local_178);
        }
        FUN_140e86fa0(param_1,DAT_141a0a818,0x80000000,&local_e8);
        local_158 = 0x4b7;
      }
      else if (iVar4 == 2) {
        local_158 = 0x4bb;
        if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(&local_188);
        }
        local_188 = 0;
        local_180 = 0;
        local_17c = 5;
        uVar6 = (**(code **)(*param_1 + 8))(param_1,DAT_1419f5b18);
        FUN_140e63610(param_1,param_2,&local_188,0,uVar6,0);
        local_158 = 0x4bc;
      }
      else if (iVar4 == 3) {
        local_158 = 0x4c0;
      }
      break;
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 4);
  if ((1 << ((byte)local_9c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a8);
  }
  if ((1 << ((byte)local_134 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_140);
  }
  if ((1 << ((byte)local_17c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_188);
  }
  if ((1 << ((byte)local_dc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e8);
  }
  if ((1 << ((byte)local_cc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_d8);
  }
  if ((1 << ((byte)local_bc & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_c8);
  }
  _eh_vector_destructor_iterator_(&local_128,0x10,4,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_168;
  return param_3;
}

