// gml_Script_anon_172_gml_Object_oTumorHemo_Create_0 @ 0x140de82d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void gml_Script_anon_172_gml_Object_oTumorHemo_Create_0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong **pplVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 **in_stack_fffffffffffffeb0;
  undefined8 local_148;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined4 uStack_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined4 local_120;
  undefined4 local_11c;
  undefined8 local_118;
  char *local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f4;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d4;
  undefined8 local_d0;
  byte local_c4;
  undefined8 local_c0;
  byte local_b4;
  undefined8 local_b0;
  byte local_a4;
  undefined8 local_a0;
  undefined4 local_94;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  longlong *local_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  
  local_110 = "gml_Object_oTumorHemangioma_Step_0";
  local_108 = 0;
  local_118 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_118;
  pcVar11 = FUN_140041b30;
  _eh_vector_constructor_iterator_(&local_d0,0x10,3,FUN_1400424d0,FUN_140041b30);
  uVar3 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a57be0);
  local_f4 = 0xffffff;
  local_100 = 0;
  local_94 = 0xffffff;
  local_a0 = 0;
  local_d4 = 0xffffff;
  local_e0 = 0;
  uVar4 = (**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_141a0a9c8);
  local_e4 = 0xffffff;
  local_f0 = 0;
  local_5c = 0xffffff;
  local_68 = 0;
  uStack_6c = 0xffffff;
  local_78 = (longlong *)0x0;
  local_11c = 0xffffff;
  local_128 = 0;
  local_108 = 3;
  FUN_140e98b30(param_1,param_2);
  local_108 = 5;
  cVar1 = FUN_140e491e0(uVar3);
  if (cVar1 == '\0') {
    local_108 = 7;
    if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_100);
    }
    local_f4 = 0;
    local_100 = 0x3ff0000000000000;
    FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_100);
    local_108 = 8;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    local_94 = 0;
    local_a0 = 0x3ff0000000000000;
    FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_a0);
    local_108 = 9;
    uStack_13c = 0xf;
    local_148 = (longlong *)0x1000001000003e0;
    local_138 = 0x1000001000003e0;
    uStack_130 = uStack_140;
    uStack_12c = 0xf;
    if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_e0);
    }
    FUN_140041b80(&local_e0,&local_138);
    FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_e0);
    local_108 = 0xb;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
    local_108 = 0xc;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02618);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
    local_108 = 0xd;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a57e00);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
    local_108 = 0xe;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025f8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0;
    local_108 = 0xf;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025b8);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
    *puVar5 = 0x3ff0000000000000;
    local_108 = 0x11;
  }
  else {
    local_108 = 0x15;
    puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a0ab48);
    local_4c = *(undefined4 *)((longlong)puVar5 + 0xc);
    local_50 = *(undefined4 *)(puVar5 + 1);
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) == 0) {
      local_58 = *puVar5;
    }
    else {
      FUN_1400419b0(&local_58,puVar5);
    }
    if ((*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141de37f0) &&
       (_Init_thread_header(&DAT_141de37f0), DAT_141de37f0 == -1)) {
      _DAT_141de380c = 0;
      _DAT_141de3800 = 0;
      _DAT_141de3820 = 0;
      _DAT_141de3814 = 0x3ff0000000000000;
      _DAT_141de3824 = 1;
      _DAT_141de3834 = 0;
      _DAT_141de3828 = 0x4000000000000000;
      _DAT_141de3838 = 2;
      _DAT_141de3848 = 0;
      _DAT_141de383c = 0x4008000000000000;
      _DAT_141de384c = 3;
      atexit((_func_5014 *)&LAB_141499f10);
      _Init_thread_footer(&DAT_141de37f0);
    }
    uVar9 = 0;
    do {
      iVar2 = FUN_140e851f0(&DAT_141de3800 + (longlong)(int)uVar9 * 0x14,&local_58,DAT_141955260,0);
      if (iVar2 == 0) {
        iVar2 = *(int *)(&DAT_141de3810 + (longlong)(int)uVar9 * 0x14);
        if (iVar2 == 0) {
          local_108 = 0x18;
          uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a57e00);
          uVar8 = (undefined4)((ulonglong)pcVar11 >> 0x20);
          FUN_140e609c0(param_1);
          FUN_1400460e0(uVar3,uVar4);
          FUN_140e60910(1);
          local_108 = 0x1a;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a57e00);
          uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a025e8);
          uStack_12c = *(uint *)((longlong)puVar5 + 0xc);
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
            local_138 = *puVar5;
          }
          else {
            FUN_1400419b0(&local_138,puVar5);
          }
          FUN_140046500(&local_138,uVar3);
          if ((uStack_12c & 0xffffff) == 0) {
            uVar10 = (undefined4)local_138;
          }
          else {
            uVar10 = FUN_140e4b060(&local_138);
          }
          uVar4 = FUN_140e78ec0(uVar10,0,0x3ff0000000000000);
          if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_f0);
          }
          local_e4 = 0;
          local_f0 = uVar4;
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          local_108 = 0x1b;
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          uStack_12c = 0;
          local_138 = 0x3ff0000000000000;
          FUN_1400462a0(&local_138,&local_f0);
          local_148 = (longlong *)local_138;
          uStack_140 = uStack_130;
          uStack_13c = uStack_12c;
          if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d0);
          }
          FUN_140041b80(&local_d0,&local_148);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          local_90 = &local_d0;
          local_148 = (longlong *)CONCAT44(uRam00000001419ee5d4,_DAT_1419ee5d0);
          uStack_140 = uRam00000001419ee5d8;
          uStack_13c = uRam00000001419ee5dc;
          if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_c0);
          }
          FUN_140041b80(&local_c0,&local_148);
          local_88 = &local_c0;
          uVar12 = CONCAT44(uVar8,DAT_1419fa0f8);
          uVar4 = FUN_140e634e0(param_1,param_2,&local_128,2,uVar12,&local_90);
          uVar8 = (undefined4)((ulonglong)uVar12 >> 0x20);
          uStack_12c = 0;
          local_138 = 0x3ff0000000000000;
          FUN_1400462a0(&local_138,uVar4);
          local_148 = (longlong *)local_138;
          uStack_140 = uStack_130;
          uStack_13c = uStack_12c;
          if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_68);
          }
          FUN_140041b80(&local_68,&local_148);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          local_108 = 0x1c;
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02628);
          local_148 = (longlong *)CONCAT44(uRam00000001419ee5c4,_DAT_1419ee5c0);
          uStack_140 = uRam00000001419ee5c8;
          uStack_13c = uRam00000001419ee5cc;
          if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d0);
          }
          FUN_140041b80(&local_d0,&local_148);
          local_90 = &local_d0;
          if (puVar6 != &local_c0) {
            local_148 = (longlong *)*puVar6;
            uStack_140 = *(undefined4 *)(puVar6 + 1);
            uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_c0);
            }
            FUN_140041b80(&local_c0,&local_148);
          }
          local_88 = &local_c0;
          local_80 = &local_68;
          in_stack_fffffffffffffeb0 = &local_90;
          pcVar11 = (code *)CONCAT44(uVar8,DAT_141a00c58);
          puVar6 = (undefined8 *)
                   FUN_140e634e0(param_1,param_2,&local_128,3,pcVar11,in_stack_fffffffffffffeb0);
          if (puVar6 != &local_100) {
            local_148 = (longlong *)*puVar6;
            uStack_140 = *(undefined4 *)(puVar6 + 1);
            uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
            if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_100);
            }
            FUN_140041b80(&local_100,&local_148);
          }
          FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_100);
          local_108 = 0x1e;
          uVar9 = FUN_140e851f0(puVar5,uVar3,DAT_141955260,1);
          if (0x7fffffff < uVar9) break;
          local_108 = 0x20;
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          (**(code **)(*param_1 + 8))(param_1,DAT_141a57e00);
          (**(code **)(*param_1 + 8))(param_1,DAT_141a025e8);
          pcVar11 = (code *)(**(code **)(*param_1 + 8))(param_1,DAT_141a025c8);
          in_stack_fffffffffffffeb0 = (undefined8 **)0x0;
          FUN_140e63610(param_1,param_2,&local_128,0,pcVar11,0);
          local_108 = 0x21;
          uStack_13c = 0xf;
          local_148 = (longlong *)0x1000001000003e1;
          local_138 = 0x1000001000003e1;
          uStack_130 = uStack_140;
          uStack_12c = 0xf;
          if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_e0);
          }
          FUN_140041b80(&local_e0,&local_138);
          FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_e0);
          local_108 = 0x23;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025f8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0;
          local_108 = 0x24;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025b8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3ff4cccccccccccd;
          local_108 = 0x26;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0x3ff0000000000000;
          local_108 = 0x27;
LAB_140de9904:
          uVar8 = DAT_141a02618;
        }
        else {
          if (iVar2 == 1) {
            local_108 = 0x2d;
            uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a02618);
            FUN_140e609c0(param_1);
            FUN_1400460e0(uVar3,uVar4);
            FUN_140e60910(1);
            local_108 = 0x2e;
            uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02618);
            uStack_13c = 0;
            local_148 = (longlong *)0x4020000000000000;
            uVar9 = FUN_140e851f0(uVar3,&local_148,DAT_141955260,1);
            if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            if (uVar9 < 0x80000000) {
              local_108 = 0x2e;
              puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025b8);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar5);
              }
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
              *puVar5 = 0x3ff0000000000000;
            }
            local_108 = 0x30;
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            local_128 = 0;
            local_120 = 0;
            local_11c = 5;
            uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a025d8);
            FUN_140e63610(param_1,param_2,&local_128,0,uVar4,0);
            uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
            local_108 = 0x32;
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            local_128 = 0;
            local_120 = 0;
            local_11c = 5;
            local_148 = (longlong *)CONCAT44(uRam0000000141dc7934,_DAT_141dc7930);
            uStack_140 = uRam0000000141dc7938;
            uStack_13c = uRam0000000141dc793c;
            if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_d0);
            }
            FUN_140041b80(&local_d0,&local_148);
            local_90 = &local_d0;
            in_stack_fffffffffffffeb0 = &local_90;
            pcVar11 = (code *)CONCAT44(uVar8,DAT_141a0a0d8);
            puVar5 = (undefined8 *)
                     FUN_140e634e0(param_1,param_2,&local_128,1,pcVar11,in_stack_fffffffffffffeb0);
            uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
            uStack_130 = *(undefined4 *)(puVar5 + 1);
            if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
              local_138 = *puVar5;
            }
            else {
              FUN_1400419b0(&local_138,puVar5);
            }
            uStack_13c = 0;
            local_148 = (longlong *)0x3fe999999999999a;
            FUN_140042560(&local_138,&local_148);
            if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            uVar9 = FUN_140e851f0(uVar3,&local_138,DAT_141955260,1);
            if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            if (uVar9 < 0x80000000) {
              local_108 = 0x34;
              (**(code **)(*param_1 + 8))(param_1,DAT_141a02618);
              pplVar7 = (longlong **)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a02638);
              uStack_13c = 6;
              in_stack_fffffffffffffeb0 =
                   (undefined8 **)((ulonglong)in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
              pcVar11 = (code *)((ulonglong)pcVar11 & 0xffffffffffffff00);
              local_148 = param_1;
              FUN_140e87440(&local_148,DAT_141a0f7f8,0x80000000,&local_78,pcVar11,
                            in_stack_fffffffffffffeb0);
              if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_148);
              }
              FUN_140e609c0(param_1);
              if (&local_78 != pplVar7) {
                local_148 = local_78;
                uStack_140 = uStack_70;
                uStack_13c = uStack_6c;
                if ((1 << ((byte)*(undefined4 *)((longlong)pplVar7 + 0xc) & 0x1f) & 0x46U) != 0) {
                  FUN_140041a50(pplVar7);
                }
                FUN_140041b80(pplVar7,&local_148);
              }
              FUN_140e60910(1);
              local_108 = 0x36;
              puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar5);
              }
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
              *puVar5 = 0x4000000000000000;
              local_108 = 0x37;
              goto LAB_140de9904;
            }
            break;
          }
          if (iVar2 == 2) {
            local_108 = 0x3d;
            uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a02618);
            uVar8 = (undefined4)((ulonglong)pcVar11 >> 0x20);
            FUN_140e609c0(param_1);
            FUN_1400460e0(uVar3,uVar4);
            FUN_140e60910(1);
            local_108 = 0x3f;
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02618);
            uStack_12c = *(uint *)((longlong)puVar5 + 0xc);
            uStack_130 = *(undefined4 *)(puVar5 + 1);
            if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
              local_138 = *puVar5;
            }
            else {
              FUN_1400419b0(&local_138,puVar5);
            }
            uStack_13c = 0;
            local_148 = (longlong *)0x4034000000000000;
            FUN_140046500(&local_138,&local_148);
            if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            if ((uStack_12c & 0xffffff) == 0) {
              uVar10 = (undefined4)local_138;
            }
            else {
              uVar10 = FUN_140e4b060(&local_138);
            }
            uVar3 = FUN_140e78ec0(uVar10,0,0x3ff0000000000000);
            if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_f0);
            }
            local_e4 = 0;
            local_f0 = uVar3;
            if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            local_108 = 0x40;
            if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_128);
            }
            local_128 = 0;
            local_120 = 0;
            local_11c = 5;
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a02638);
            puVar6 = (undefined8 *)(**(code **)(*param_1 + 8))(param_1,DAT_141a025a8);
            if (puVar5 != &local_d0) {
              local_148 = (longlong *)*puVar5;
              uStack_140 = *(undefined4 *)(puVar5 + 1);
              uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_d0);
              }
              FUN_140041b80(&local_d0,&local_148);
            }
            local_90 = &local_d0;
            if (puVar6 != &local_c0) {
              local_148 = (longlong *)*puVar6;
              uStack_140 = *(undefined4 *)(puVar6 + 1);
              uStack_13c = *(undefined4 *)((longlong)puVar6 + 0xc);
              if ((1 << (local_b4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_c0);
              }
              FUN_140041b80(&local_c0,&local_148);
            }
            local_88 = &local_c0;
            uStack_12c = local_e4;
            uStack_130 = local_e8;
            if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) == 0) {
              local_138 = local_f0;
            }
            else {
              FUN_1400419b0(&local_138,&local_f0);
            }
            FUN_140042560(&local_138,&local_f0);
            local_148 = (longlong *)local_138;
            uStack_140 = uStack_130;
            uStack_13c = uStack_12c;
            if ((1 << (local_a4 & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_b0);
            }
            FUN_140041b80(&local_b0,&local_148);
            if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_138);
            }
            local_80 = &local_b0;
            in_stack_fffffffffffffeb0 = &local_90;
            pcVar11 = (code *)CONCAT44(uVar8,DAT_141a00c58);
            puVar5 = (undefined8 *)
                     FUN_140e634e0(param_1,param_2,&local_128,3,pcVar11,in_stack_fffffffffffffeb0);
            if (puVar5 != &local_100) {
              local_148 = (longlong *)*puVar5;
              uStack_140 = *(undefined4 *)(puVar5 + 1);
              uStack_13c = *(undefined4 *)((longlong)puVar5 + 0xc);
              if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_100);
              }
              FUN_140041b80(&local_100,&local_148);
            }
            FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_100);
            local_108 = 0x42;
            uStack_13c = 0;
            local_148 = (longlong *)0x3ff0000000000000;
            uVar9 = FUN_140e851f0(&local_f0,&local_148,DAT_141955260,1);
            if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(&local_148);
            }
            if (uVar9 < 0x80000000) {
              local_108 = 0x44;
              uStack_13c = 0xf;
              local_148 = (longlong *)0x1000001000003e0;
              local_138 = 0x1000001000003e0;
              uStack_130 = uStack_140;
              uStack_12c = 0xf;
              if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(&local_e0);
              }
              FUN_140041b80(&local_e0,&local_138);
              FUN_140e86fa0(param_1,DAT_141a0a728,0x80000000,&local_e0);
              local_108 = 0x46;
              puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025f8);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar5);
              }
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
              *puVar5 = 0;
              local_108 = 0x47;
              puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025b8);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar5);
              }
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
              *puVar5 = 0x3ff3333333333333;
              local_108 = 0x49;
              puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
              if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
                FUN_140041a50(puVar5);
              }
              *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
              *puVar5 = 0x4008000000000000;
              local_108 = 0x4a;
              goto LAB_140de9904;
            }
            break;
          }
          if (iVar2 != 3) break;
          local_108 = 0x50;
          uVar3 = (**(code **)(*param_1 + 0x10))(param_1,DAT_141a02618);
          FUN_140e609c0(param_1);
          FUN_1400460e0(uVar3,uVar4);
          FUN_140e60910(1);
          local_108 = 0x51;
          uVar3 = (**(code **)(*param_1 + 8))(param_1,DAT_141a02618);
          uStack_12c = 0;
          local_138 = 0x4018000000000000;
          uVar9 = FUN_140e851f0(uVar3,&local_138,DAT_141955260,1);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          if (uVar9 < 0x80000000) {
            local_108 = 0x51;
            puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025b8);
            if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
              FUN_140041a50(puVar5);
            }
            *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
            *puVar5 = 0x3ff0000000000000;
          }
          local_108 = 0x53;
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          uVar4 = (**(code **)(*param_1 + 8))(param_1,DAT_141a025d8);
          FUN_140e63610(param_1,param_2,&local_128,0,uVar4,0);
          uVar8 = (undefined4)((ulonglong)uVar4 >> 0x20);
          local_108 = 0x55;
          if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_128);
          }
          local_128 = 0;
          local_120 = 0;
          local_11c = 5;
          local_148 = (longlong *)CONCAT44(uRam0000000141dc7934,_DAT_141dc7930);
          uStack_140 = uRam0000000141dc7938;
          uStack_13c = uRam0000000141dc793c;
          if ((1 << (local_c4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_d0);
          }
          FUN_140041b80(&local_d0,&local_148);
          local_90 = &local_d0;
          in_stack_fffffffffffffeb0 = &local_90;
          pcVar11 = (code *)CONCAT44(uVar8,DAT_141a0a0d8);
          puVar5 = (undefined8 *)
                   FUN_140e634e0(param_1,param_2,&local_128,1,pcVar11,in_stack_fffffffffffffeb0);
          uStack_12c = *(undefined4 *)((longlong)puVar5 + 0xc);
          uStack_130 = *(undefined4 *)(puVar5 + 1);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) == 0) {
            local_138 = *puVar5;
          }
          else {
            FUN_1400419b0(&local_138,puVar5);
          }
          uStack_13c = 0;
          local_148 = (longlong *)0x3feccccccccccccd;
          FUN_140042560(&local_138,&local_148);
          if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_148);
          }
          uVar9 = FUN_140e851f0(uVar3,&local_138,DAT_141955260,1);
          if ((1 << ((byte)uStack_12c & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_138);
          }
          if (0x7fffffff < uVar9) break;
          local_108 = 0x57;
          (**(code **)(*param_1 + 8))(param_1,DAT_141a02618);
          if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(&local_100);
          }
          local_f4 = 0;
          local_100 = 0x3ff0000000000000;
          FUN_140e86fa0(param_1,DAT_141a0f7f8,0x80000000,&local_100);
          local_108 = 0x58;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a025f8);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0;
          local_108 = 0x5a;
          puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_141a0ab48);
          if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
            FUN_140041a50(puVar5);
          }
          *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
          *puVar5 = 0;
          local_108 = 0x5b;
          uVar8 = DAT_141a57e00;
        }
        puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,uVar8);
        if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
          FUN_140041a50(puVar5);
        }
        *puVar5 = 0;
        *(undefined4 *)((longlong)puVar5 + 0xc) = 0;
        break;
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 4);
    local_108 = 0x62;
    uStack_13c = 6;
    local_148 = param_1;
    FUN_140e87440(&local_148,DAT_141a0f7f8,0x80000000,&local_78,
                  (ulonglong)pcVar11 & 0xffffffffffffff00,
                  (ulonglong)in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
    if ((1 << ((byte)uStack_13c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_148);
    }
    local_148 = local_78;
    uStack_140 = uStack_70;
    uStack_13c = uStack_6c;
    if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_a0);
    }
    FUN_140041b80(&local_a0,&local_148);
    FUN_140e86fa0(param_1,DAT_141a0f938,0x80000000,&local_a0);
    if ((1 << ((byte)local_4c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_58);
    }
  }
  if ((1 << ((byte)local_11c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_128);
  }
  if ((1 << ((byte)uStack_6c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_78);
  }
  if ((1 << ((byte)local_5c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_68);
  }
  if ((1 << ((byte)local_e4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_f0);
  }
  if ((1 << ((byte)local_d4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_e0);
  }
  if ((1 << ((byte)local_94 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_a0);
  }
  if ((1 << ((byte)local_f4 & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_100);
  }
  _eh_vector_destructor_iterator_(&local_d0,0x10,3,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_118;
  return;
}

