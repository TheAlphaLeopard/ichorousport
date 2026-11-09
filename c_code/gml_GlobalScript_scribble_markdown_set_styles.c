// gml_GlobalScript_scribble_markdown_set_styles @ 0x14047b410

undefined8 *
gml_GlobalScript_scribble_markdown_set_styles
          (longlong *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *local_res8;
  undefined4 uVar10;
  undefined8 uVar9;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  byte local_7c;
  undefined8 local_78;
  char *local_70;
  undefined4 local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50;
  undefined8 *local_48;
  
  local_70 = "gml_Script____struct___218@scribble_markdown_format@scribble_markdown_format";
  local_78 = DAT_141dc7a50;
  DAT_141dc7a50 = &local_78;
  local_68 = 0xab;
  uVar10 = 1;
  _eh_vector_constructor_iterator_(&local_88,0x10,1,FUN_1400424d0,FUN_140041b30);
  puVar1 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f9478);
  puVar2 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f92b8);
  puVar3 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f9328);
  puVar4 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f9428);
  local_60 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f9348);
  local_58 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f94c8);
  local_50 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f92e8);
  local_48 = (undefined8 *)(**(code **)(*DAT_141a729d8 + 8))(DAT_141a729d8,DAT_1419f92c8);
  local_ac = 0;
  local_b8 = 0;
  *(undefined4 *)((longlong)param_3 + 0xc) = 5;
  *param_3 = 0;
  if (*(int *)(*(longlong *)ThreadLocalStoragePointer + 0x18) < DAT_141ddf124) {
    _Init_thread_header(&DAT_141ddf124);
    if (DAT_141ddf124 == -1) {
      DAT_141ddf0e8 = FUN_140e63aa0(DAT_1419f9308);
      _Init_thread_footer(&DAT_141ddf124);
    }
  }
  FUN_140e643a0(param_1,DAT_141ddf0e8);
  local_68 = 0xac;
  puVar5 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9238);
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar6 = (undefined8 *)FUN_140e634e0(param_1,param_2,&local_b8,0,uVar9,0);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar6 != puVar5) {
    local_98 = *puVar6;
    uStack_90 = *(undefined4 *)(puVar6 + 1);
    uStack_8c = *(undefined4 *)((longlong)puVar6 + 0xc);
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar5 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar5);
    }
    FUN_140041b80(puVar5,&local_98);
  }
  FUN_140e60910(1);
  local_68 = 0xaf;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f93f8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_98,
                gml_Script____struct___222____struct___218_scribble_markdown_format_scribble_markdown_format
                ,0);
  if (&local_98 != puVar1) {
    local_a8 = (undefined4)local_98;
    uStack_a4 = local_98._4_4_;
    uStack_a0 = uStack_90;
    uStack_9c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_88) {
    local_a8 = *(undefined4 *)puVar1;
    uStack_a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_a0 = *(undefined4 *)(puVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_res8 = &local_88;
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar9,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar8 != puVar7) {
    local_a8 = *puVar8;
    uStack_a4 = puVar8[1];
    uStack_a0 = puVar8[2];
    uStack_9c = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_a8);
  }
  FUN_140e60910(1);
  local_68 = 0xb5;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9488);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_98,
                gml_Script____struct___223____struct___218_scribble_markdown_format_scribble_markdown_format
                ,0);
  if (&local_98 != puVar2) {
    local_a8 = (undefined4)local_98;
    uStack_a4 = local_98._4_4_;
    uStack_a0 = uStack_90;
    uStack_9c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar2 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar2);
    }
    FUN_140041b80(puVar2,&local_a8);
  }
  FUN_140e60910(1);
  if (puVar2 != &local_88) {
    local_a8 = *(undefined4 *)puVar2;
    uStack_a4 = *(undefined4 *)((longlong)puVar2 + 4);
    uStack_a0 = *(undefined4 *)(puVar2 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar2 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_res8 = &local_88;
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar9,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar8 != puVar7) {
    local_a8 = *puVar8;
    uStack_a4 = puVar8[1];
    uStack_a0 = puVar8[2];
    uStack_9c = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_a8);
  }
  FUN_140e60910(1);
  local_68 = 0xba;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9458);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_98,
                gml_Script____struct___224____struct___218_scribble_markdown_format_scribble_markdown_format
                ,0);
  if (&local_98 != puVar3) {
    local_a8 = (undefined4)local_98;
    uStack_a4 = local_98._4_4_;
    uStack_a0 = uStack_90;
    uStack_9c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar3 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar3);
    }
    FUN_140041b80(puVar3,&local_a8);
  }
  FUN_140e60910(1);
  if (puVar3 != &local_88) {
    local_a8 = *(undefined4 *)puVar3;
    uStack_a4 = *(undefined4 *)((longlong)puVar3 + 4);
    uStack_a0 = *(undefined4 *)(puVar3 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar3 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_res8 = &local_88;
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar9,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar8 != puVar7) {
    local_a8 = *puVar8;
    uStack_a4 = puVar8[1];
    uStack_a0 = puVar8[2];
    uStack_9c = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_a8);
  }
  FUN_140e60910(1);
  local_68 = 0xbf;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9268);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_98,
                gml_Script____struct___225____struct___218_scribble_markdown_format_scribble_markdown_format
                ,0);
  if (&local_98 != puVar4) {
    local_a8 = (undefined4)local_98;
    uStack_a4 = local_98._4_4_;
    uStack_a0 = uStack_90;
    uStack_9c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar4 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar4);
    }
    FUN_140041b80(puVar4,&local_a8);
  }
  FUN_140e60910(1);
  if (puVar4 != &local_88) {
    local_a8 = *(undefined4 *)puVar4;
    uStack_a4 = *(undefined4 *)((longlong)puVar4 + 4);
    uStack_a0 = *(undefined4 *)(puVar4 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar4 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_res8 = &local_88;
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar9,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar8 != puVar7) {
    local_a8 = *puVar8;
    uStack_a4 = puVar8[1];
    uStack_a0 = puVar8[2];
    uStack_9c = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_a8);
  }
  FUN_140e60910(1);
  local_68 = 0xc6;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9288);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_98,
                gml_Script____struct___226____struct___218_scribble_markdown_format_scribble_markdown_format
                ,0);
  puVar1 = local_60;
  if (&local_98 != local_60) {
    local_a8 = (undefined4)local_98;
    uStack_a4 = local_98._4_4_;
    uStack_a0 = uStack_90;
    uStack_9c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)local_60 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_60);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_88) {
    local_a8 = *(undefined4 *)puVar1;
    uStack_a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_a0 = *(undefined4 *)(puVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_res8 = &local_88;
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar9,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar8 != puVar7) {
    local_a8 = *puVar8;
    uStack_a4 = puVar8[1];
    uStack_a0 = puVar8[2];
    uStack_9c = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_a8);
  }
  FUN_140e60910(1);
  local_68 = 0xca;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9448);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_98,
                gml_Script____struct___227____struct___218_scribble_markdown_format_scribble_markdown_format
                ,0);
  puVar1 = local_58;
  if (&local_98 != local_58) {
    local_a8 = (undefined4)local_98;
    uStack_a4 = local_98._4_4_;
    uStack_a0 = uStack_90;
    uStack_9c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)local_58 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_58);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_88) {
    local_a8 = *(undefined4 *)puVar1;
    uStack_a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_a0 = *(undefined4 *)(puVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_res8 = &local_88;
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar9,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar8 != puVar7) {
    local_a8 = *puVar8;
    uStack_a4 = puVar8[1];
    uStack_a0 = puVar8[2];
    uStack_9c = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_a8);
  }
  FUN_140e60910(1);
  local_68 = 0xce;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9368);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_98,
                gml_Script____struct___218_scribble_markdown_format_scribble_markdown_format,0);
  puVar1 = local_50;
  if (&local_98 != local_50) {
    local_a8 = (undefined4)local_98;
    uStack_a4 = local_98._4_4_;
    uStack_a0 = uStack_90;
    uStack_9c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)local_50 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_50);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_88) {
    local_a8 = *(undefined4 *)puVar1;
    uStack_a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_a0 = *(undefined4 *)(puVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_res8 = &local_88;
  FUN_140e609c0(param_1);
  uVar9 = CONCAT44(uVar10,DAT_1419fd6d8);
  puVar8 = (undefined4 *)FUN_140e634e0(param_1,param_2,&local_b8,1,uVar9,&local_res8);
  uVar10 = (undefined4)((ulonglong)uVar9 >> 0x20);
  if (puVar8 != puVar7) {
    local_a8 = *puVar8;
    uStack_a4 = puVar8[1];
    uStack_a0 = puVar8[2];
    uStack_9c = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_a8);
  }
  FUN_140e60910(1);
  local_68 = 0xd3;
  puVar1 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f9398);
  FUN_140e609c0(param_1);
  uStack_8c = 0xf;
  local_98 = 0x1000001000000cc;
  if (&local_98 != puVar1) {
    local_a8 = 0xcc;
    uStack_a4 = 0x1000001;
    uStack_a0 = uStack_90;
    uStack_9c = 0xf;
    if ((1 << ((byte)*(undefined4 *)((longlong)puVar1 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar1);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  FUN_140e60910(1);
  local_68 = 0xd5;
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  local_b8 = 0;
  local_b0 = 0;
  local_ac = 5;
  puVar7 = (undefined4 *)(**(code **)(*param_1 + 0x10))(param_1,DAT_1419f92f8);
  FUN_140e609c0(DAT_141a729d8);
  FUN_140e645a0(&local_98,gml_Script_scribble_markdown_format,0);
  puVar1 = local_48;
  if (&local_98 != local_48) {
    local_a8 = (undefined4)local_98;
    uStack_a4 = local_98._4_4_;
    uStack_a0 = uStack_90;
    uStack_9c = uStack_8c;
    if ((1 << ((byte)*(undefined4 *)((longlong)local_48 + 0xc) & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(local_48);
    }
    FUN_140041b80(puVar1,&local_a8);
  }
  FUN_140e60910(1);
  if (puVar1 != &local_88) {
    local_a8 = *(undefined4 *)puVar1;
    uStack_a4 = *(undefined4 *)((longlong)puVar1 + 4);
    uStack_a0 = *(undefined4 *)(puVar1 + 1);
    uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
    if ((1 << (local_7c & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(&local_88);
    }
    FUN_140041b80(&local_88,&local_a8);
  }
  if ((1 << ((byte)uStack_8c & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_98);
  }
  local_res8 = &local_88;
  FUN_140e609c0(param_1);
  puVar8 = (undefined4 *)
           FUN_140e634e0(param_1,param_2,&local_b8,1,CONCAT44(uVar10,DAT_1419fd6d8),&local_res8);
  if (puVar8 != puVar7) {
    local_a8 = *puVar8;
    uStack_a4 = puVar8[1];
    uStack_a0 = puVar8[2];
    uStack_9c = puVar8[3];
    if ((1 << ((byte)puVar7[3] & 0x1f) & 0x46U) != 0) {
      FUN_140041a50(puVar7);
    }
    FUN_140041b80(puVar7,&local_a8);
  }
  FUN_140e60910(1);
  if ((1 << ((byte)local_ac & 0x1f) & 0x46U) != 0) {
    FUN_140041a50(&local_b8);
  }
  _eh_vector_destructor_iterator_(&local_88,0x10,1,FUN_140041b30);
  DAT_141dc7a50 = (undefined8 *)local_78;
  return param_3;
}

